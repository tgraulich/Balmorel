* Equations for addon import results used in seasonal rolling horizon model definition
* Latest revision 20200720 (jgb)


$ifi %HYRSBB123%==cont  QWATERVOLINI
$ifi %HYRSBB123%==cont  QWATERVOLINI_LAST
$ifi %HYRSBB123%==price  QHYRSSEQCURT
$ifi %HYRSBB123%==price  QHYRSMINVOL_LAST
$ifi %HYRSBB123%==price  QHYRSMAXVOL_LAST

$ifi %ADDESTOVOLTS%==cont  QESTOVOLTSIMPORT
$ifi %ADDESTOVOLTS%==cont  QESTOVOLTSIMPORT_LAST
$ifi %ADDESTOVOLTS%==price QESTOVOLTLIMS_LAST

$ifi %ADDHSTOVOLTS%==cont  QHSTOVOLTSIMPORT
$ifi %ADDHSTOVOLTS%==cont  QHSTOVOLTSIMPORT_LAST
$ifi %ADDHSTOVOLTS%==price QHSTOVOLTLIMS_LAST

$ifi %ADDESTOVOLT%==cont  QESTOVOLTIMPORT
$ifi %ADDHSTOVOLT%==cont  QHSTOVOLTIMPORT

$ifi %HYDROGEN%==yes $ifi %ADDH2STOVOLTS%==cont  QH2STOVOLTSIMPORT
$ifi %HYDROGEN%==yes $ifi %ADDH2STOVOLTS%==cont  QH2STOVOLTSIMPORT_LAST
$ifi %HYDROGEN%==yes $ifi %ADDH2STOVOLTS%==price QHYDROGEN_STOMAXCON_LAST

$ifi %HYDROGEN%==yes $ifi %ADDBIOMETHSTOVOLTS%==cont QBIOMETHSTOVOLTSIMPORT
$ifi %HYDROGEN%==yes $ifi %ADDBIOMETHSTOVOLTS%==cont QBIOMETHSTOVOLTSIMPORT_LAST


