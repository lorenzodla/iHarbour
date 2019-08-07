#include "hbclass.ch"

CLASS UILabel FROM NSObject

METHOD New( cText, nX, nY, nWidth, nHeight  )
METHOD SetText ( cText ) INLINE Label_SetText( ::hObj, cText )
METHOD SetColor ( nRed, nGreen, nBlue, nAlpha ) INLINE Label_SetColor( ::hObj, nRed, nGreen, nBlue, nAlpha )
METHOD TextAlignment( nAlign ) INLINE Label_Alignment( ::hObj, nAlign )

ENDCLASS

METHOD New( cText, nX, nY, nWidth, nHeight ) CLASS UILabel

::hObj = CreateLabel( cText, nX, nY, nWidth, nHeight )

return Self
