// Harbour for iOS
#include "hbclass.ch"

static hBtn1, hBtn2, hBtn3, hTxtField, lExit := .F.
static oView

function Main()

   oView = NSObject()

   SetStatusBar(1)
   SetBkColor( hb_Random( 255 ), hb_Random( 255 ), hb_Random( 255 ), hb_Random( 255 ) )

   hBtn1 = CreateButton( "NS Classes", 80, 100, 100, 50, 5 )
   hBtn2 = CreateButton( "End", 80, 200, 100, 50, 5 )
   hBtn3 = CreateButton( "SuperProps", 80, 300, 100, 50, 5 )
   CreateLabel( "Harbour for iOS", 80, 500, 200, 50, 2 )
   CreateLabel( hb_Version(), 50, 600, 400, 50 )
   hTxtField = CreateTextField(80, 400, 100, 50, "Enter text...")
   CreateImageView("harbour.png", 80, 650, 100, 100)

   oView:hObj = hBtn1

   // MsgInfo( Str( oView:Send( "backgroundColor" ) ) )

   while ! lExit
      SysRefresh()
   end

return nil

function HandleEvent( hControl )

   local n

   if hControl == hBtn1
      MsgInfo( oView:NSClassName(), oView:NSClassSuperName() )
   endif

   if hControl == hBtn2
      MsgInfo( TextField_GetText(hTxtField) )
      if MsgYesNo( "Do you want to exit ?", "Please select" )
         lExit = .T.
      endif
   endif

   if hControl == hBtn3
      MsgInfo( Str( oView:NumSuperProps() ), "Numer of properties" )
      for n = 1 to oView:NumSuperProps()
         MsgInfo( oView:SuperPropName( n ) )
      next
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
