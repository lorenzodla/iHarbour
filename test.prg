// Harbour for iOS

static hBtn1, hBtn2

function Main()

   hBtn1 = CreateButton( "Click", 80, 100, 100, 50 )
   hBtn2 = CreateButton( "End",   80, 200, 100, 50 )

   while .T.
      SysRefresh()
   end 

return nil

function HandleEvent( hControl )

   if hControl == hBtn1
      MsgInfo( "Harbour power!" )
   endif

   if hControl == hBtn2
      Exit()
   endif

return nil
