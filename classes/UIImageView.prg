#include "hbclass.ch"

CLASS UIImageView FROM NSObject

METHOD New( cImage, nX, nY, nWidth, nHeight )
METHOD SetImage( cImage ) INLINE ImageView_SetImage( ::hObj, cImage )

ENDCLASS

METHOD New( cImage, nX, nY, nWidth, nHeight ) CLASS UIImageView

::hObj = CreateImageView( cImage, nX, nY, nWidth, nHeight )

return Self
