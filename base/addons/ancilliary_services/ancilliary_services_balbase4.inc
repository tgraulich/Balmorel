* Ancillary services by Juan Gea Berm�dez 2019.


$ifi %FCR%==yes QASFCRUPR
$ifi %FCR%==yes $ifi %DOWN_REGULATION_INCLUDED%==yes QASFCRDOWNR
$ifi %FCR%==yes QASFCRUPC
$ifi %FCR%==yes $ifi %DOWN_REGULATION_INCLUDED%==yes QASFCRDOWNC

$ifi %AFRR%==yes QASAFRRUPR
$ifi %AFRR%==yes $ifi %DOWN_REGULATION_INCLUDED%==yes QASAFRRDOWNR
$ifi %AFRR%==yes QASAFRRUPC
$ifi %AFRR%==yes $ifi %DOWN_REGULATION_INCLUDED%==yes QASAFRRDOWNC

$ifi %MFRR%==yes QASMFRRUPR
$ifi %MFRR%==yes $ifi %DOWN_REGULATION_INCLUDED%==yes QASMFRRDOWNR
$ifi %MFRR%==yes QASMFRRUPC
$ifi %MFRR%==yes $ifi %DOWN_REGULATION_INCLUDED%==yes QASMFRRDOWNC

$ifi %MRR%==yes  QASMRRUPR
$ifi %MRR%==yes  $ifi %DOWN_REGULATION_INCLUDED%==yes QASMRRDOWNR
$ifi %MRR%==yes  QASMRRUPC
$ifi %MRR%==yes  $ifi %DOWN_REGULATION_INCLUDED%==yes QASMRRDOWNC

QASSTOONUP
$ifi %DOWN_REGULATION_INCLUDED%==yes QASSTOONDOWN
QASESTOONENERGYUP
$ifi %DOWN_REGULATION_INCLUDED%==yes QASESTOONENERGYDOWN
QASESTOSONENERGYUP
$ifi %DOWN_REGULATION_INCLUDED%==yes QASESTOSONENERGYDOWN

$ifi NOT %ANC_SERV_VRE%==yes $goto NO_ANC_SERV_VRE
QASWNDUP
QASSOLEUP
QASHYRRUP
QASWAVEUP

$ifi %DOWN_REGULATION_INCLUDED%==yes QASWNDDOWN
$ifi %DOWN_REGULATION_INCLUDED%==yes QASSOLEDOWN
$ifi %DOWN_REGULATION_INCLUDED%==yes QASHYRRDOWN
$ifi %DOWN_REGULATION_INCLUDED%==yes QASWAVEDOWN
$label NO_ANC_SERV_VRE

