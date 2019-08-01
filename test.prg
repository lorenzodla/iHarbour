// Harbour for iOS
#include "hbclass.ch"

static hBtn1, hBtn2, hBtn3, lExit := .F.
static oView

function Main()

   oView = NSObject()

   SetStatusBar(1)
   SetBkColor( 255, 127, 80, 100 )

   hBtn1 = CreateButton( "Click", 80, 100, 100, 50, 10 )
   hBtn2 = CreateButton( "End",   80, 200, 100, 50 )
   hBtn3 = CreateButton( "SuperProps", 80, 300, 100, 50 )
   CreateLabel( "Hello Harbour!", 80, 500, 200, 50, 2 )
   CreateLabel( hb_Version(), 80, 600, 300, 50)

   oView:hObj = hBtn1

   MsgInfo( Str( oView:Send( "backgroundColor" ) ) )

   while ! lExit
      SysRefresh()
   end

   MsgInfo( "That was all folks!" )

return nil

function HandleEvent( hControl )

   local n

   if hControl == hBtn1
      MsgInfo( oView:NSClassName(), oView:NSClassSuperName() )
   endif

   if hControl == hBtn2
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
