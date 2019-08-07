#include "hbclass.ch"

CLASS UITextField FROM NSObject

METHOD New( nX, nY, nWidth, nHeight, cPlaceholder )
METHOD GetText() INLINE TextField_GetText( ::hObj )

ENDCLASS

METHOD New( nX, nY, nWidth, nHeight, cPlaceholder ) CLASS UITextField

::hObj = CreateTextField( nX, nY, nWidth, nHeight, cPlaceholder )

return Self
