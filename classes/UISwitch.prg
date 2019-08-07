#include "hbclass.ch"

CLASS UISwitch FROM NSObject

METHOD New( nX, nY )
METHOD IsOn() INLINE Switch_isOn( ::hObj )

ENDCLASS

METHOD New( nx, nY ) CLASS UISwitch

::hObj = CreateSwitch( nX, nY )

return Self
