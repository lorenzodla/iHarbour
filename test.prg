// Harbour for iOS

static hBtn1, hBtn2, lExit := .F.

function Main()

   SetStatusBar(1)
   SetBkColor( 255, 127, 80, 100 )

   hBtn1 = CreateButton( "Click", 80, 100, 100, 50, 10 )
   hBtn2 = CreateButton( "End",   80, 200, 100, 50 )
   CreateLabel( "Hello Harbour!", 80, 300, 200, 50, 2 )
   CreateLabel( hb_Version(), 80, 400, 200, 50)

   while ! lExit
      SysRefresh()
   end

   MsgInfo( "That was all folks!" )

return nil

function HandleEvent( hControl )

   if hControl == hBtn1
      MsgInfo( hb_Version(), "Hello World!" )

      MsgInfo( "Harbour power" )
   endif

   if hControl == hBtn2
      if MsgYesNo( "Do you want to exit ?", "Please select" )
         lExit = .T.
      endif
   endif

return nil
