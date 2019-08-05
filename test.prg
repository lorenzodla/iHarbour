// Harbour for iOS
#include "hbclass.ch"

static aControls := {}
static lExit := .F.
static oView
static oTxtField

function Main()

   local oBtn1 := UIButton():New( "NS Classes", 80, 100, 100, 50 )
   local oBtn2 := UIButton():New( "End", 80, 200, 100, 50 )
   local oBtn3 := UIButton():New( "SuperProps", 80, 300, 100, 50 )
   local oBtn4 := UIButton():New( "Show", 185, 400, 100, 50 )

   local oLbl1 := UILabel():New( "Harbour for iOS", 80, 500, 200, 50 )
   local oLbl2 := UILabel():New( hb_Version(), 50, 600, 400, 50 )

   local oImgView := UIImageView():New("harbour.png", 80, 650, 100, 100)

   oTxtField := UITextField():New( 80, 400, 100, 50, "Enter text..." )

   oView = NSObject()

   SetStatusBar(1)
   SetBkColor( hb_Random( 255 ), hb_Random( 255 ), hb_Random( 255 ), hb_Random( 255 ) )

   oBtn1:SetCorners( 5 )
   oBtn2:SetCorners( 5 )
   oLbl1:TextAlignment( 2 )

   oBtn3:SetCorners( 5 )
   oBtn4:SetCorners( 5 )
   oBtn4:SetBackgroundColor( hb_Random( 255 ), hb_Random( 255 ), hb_Random( 255 ), hb_Random( 255 ) )

   // MsgInfo( Str( oView:Send( "backgroundColor" ) ) )

   while ! lExit
      SysRefresh()
   end

return nil

function HandleEvent( hControl )

   local nAt := AScan( aControls, { | oCtrl | oCtrl:hObj == hControl } )

   if nAt == 1
      MsgInfo( oView:NSClassName(), oView:NSClassSuperName() )
   endif

   if nAt == 2
      if MsgYesNo( "Do you want to exit ?", "Please select" )
         lExit = .T.
      endif
   endif

   if nAt == 3
      MsgInfo( Str( oView:NumSuperProps() ), "Numer of properties" )
      for n = 1 to oView:NumSuperProps()
         MsgInfo( oView:SuperPropName( n ) )
      next
   endif

   if nAt == 4
      MsgInfo( oTxtField:GetText() )
   endif

return nil

//------------------------------------------------------------------------------------//

CLASS NSObject

   DATA   hObj

   METHOD Send( cMsg )       INLINE NSObjSend( ::hObj, cMsg )
   METHOD NumProps()         INLINE ClassPropList( ::hObj )
   METHOD NumMethods()       INLINE ClassMethodList( ::hObj )
   METHOD NumSuperProps()    INLINE ClassSuperPropList( ::hObj )
   METHOD NSClassName()      INLINE ClassGetName( ::hObj )
   METHOD NSClassSuperName() INLINE ClassGetSuperName( ::hObj )
   METHOD MethodName( n )    INLINE ClassMethodName( ::hObj, n )
   METHOD SuperPropName( n ) INLINE ClassSuperPropName( ::hObj, n )

ENDCLASS

//------------------------------------------------------------------------------------//

CLASS UIButton FROM NSObject

   METHOD New( cText, nX, nY, nWidth, nHeight )
   METHOD SetTitle( cTitle ) INLINE Button_SetTitle( ::hObj, cTitle )
   METHOD SetBackgroundColor( nRed, nGreen, nBlue, nAlpha ) INLINE Button_SetBackgroundColor( ::hObj, nRed, nGreen, nBlue, nAlpha )
   METHOD SetCorners( n ) INLINE Button_SetCorners( ::hObj, n )

ENDCLASS

METHOD New( cText, nX, nY, nWidth, nHeight ) CLASS UIBUtton

  ::hObj = CreateButton( cText, nX, nY, nWidth, nHeight )

  AAdd( aControls, Self )

return Self

//------------------------------------------------------------------------------------//

CLASS UILabel FROM NSObject

   METHOD New( cText, nX, nY, nWidth, nHeight  )
   METHOD SetText ( cText ) INLINE Label_SetText( ::hObj, cText )
   METHOD SetColor ( nRed, nGreen, nBlue, nAlpha ) INLINE Label_SetColor( ::hObj, nRed, nGreen, nBlue, nAlpha )
   METHOD TextAlignment( nAlign ) INLINE Label_Alignment( ::hObj, nAlign )

ENDCLASS

METHOD New( cText, nX, nY, nWidth, nHeight ) CLASS UILabel

::hObj = CreateLabel( cText, nX, nY, nWidth, nHeight )

return Self

//------------------------------------------------------------------------------------//

CLASS UITextField FROM NSObject

   METHOD New( nX, nY, nWidth, nHeight, cPlaceholder )
   METHOD GetText() INLINE TextField_GetText( ::hObj )

ENDCLASS

METHOD New( nX, nY, nWidth, nHeight, cPlaceholder ) CLASS UITextField

::hObj = CreateTextField( nX, nY, nWidth, nHeight, cPlaceholder )

return Self

//------------------------------------------------------------------------------------//

CLASS UIImageView FROM NSObject

METHOD New( cImage, nX, nY, nWidth, nHeight )
METHOD SetImage( cImage ) INLINE ImageView_SetImage( ::hObj, cImage )

ENDCLASS

METHOD New( cImage, nX, nY, nWidth, nHeight ) CLASS UIImageView

::hObj = CreateImageView( cImage, nX, nY, nWidth, nHeight )

return Self
