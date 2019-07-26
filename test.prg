function Main()

   MsgInfo( Time(), "Current time" )
   NsLog( "first MsgInfo()" )

   if MsgYesNo( "Do you enjoy Harbour on iOS ?", "Please select" )
      MsgInfo( "oh cool!" )
   else
      MsgInfo( "we will try to improve it" )
   endif

   MsgInfo( hb_Version(), "Harbour version" )
   NsLog( "second MsgInfo()" )

return nil

function hb_LogRddInherit()

return nil
