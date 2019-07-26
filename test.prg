// Harbour for iOS

static hBtn1, hBtn2, lExit := .F.

function Main()

   hBtn1 = CreateButton( "Click", 80, 100, 100, 50 )
   hBtn2 = CreateButton( "End",   80, 200, 100, 50 )

   while ! lExit
      SysRefresh()
   end

   MsgInfo( "That was all folks!" )

return nil

function HandleEvent( hControl )

   if hControl == hBtn1
      MsgInfo( "Harbour power!" )
   endif

   if hControl == hBtn2
      if MsgYesNo( "Do you want to exit ?", "Please select" )
         lExit = .T.
      endif
   endif

return nil
