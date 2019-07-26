// Harbour for iOS

function Main()

   MsgInfo( OS(), "Current OS" )
   NsLog( "first MsgInfo()" )

   if MsgYesNo( "Do you enjoy Harbour on iOS ?", "Please select" )
      MsgInfo( "oh cool!" )
   else
      MsgInfo( "we will try to improve it" )
   endif

   MsgInfo( hb_Version(), "Harbour version" )
   NsLog( "second MsgInfo()" )

return nil
