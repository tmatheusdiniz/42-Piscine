#!/bin/bash
# To test this Bash you need to uncomment the variables below. uncomment only to test. To push to the system these lines can't be uncomment.

#-------------Teste 1
#str1="\'?"
#str2='"\"'
#str3="'"
#str4='\'
#FT_NBR1=$str1$str2$str3$str4
#FT_NBR2=rcrdmddd

#-------------Teste 2
excl="!"
barraspas='\"\"'
FT_NBR1=$barraspas$excl$barraspas$excl$barraspas$excl$barraspas$excl$barraspas$excl$barraspas
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

echo $FT_NBR1 + $FT_NBR2 | \
	sed "s/'/0/g" | \
	tr '\\"?!' 1234 | \
	tr 'mrdoc' 01234 | \
	xargs echo 'obase=13; ibase=5;' | \
	bc | \
	tr 0123456789ABC 'gtaio luSnemf'
