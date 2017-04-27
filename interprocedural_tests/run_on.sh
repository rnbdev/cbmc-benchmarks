#!/usr/bin/bash

CBMCROOT="/home/ranadeep/cmi/thesis/cbmc"
CBMCROOT=${CBMCROOT%/}

GOTOCC="${CBMCROOT}/src/goto-cc/goto-cc"
GOTOINSTR="${CBMCROOT}/src/goto-instrument/goto-instrument"

$GOTOCC -o ${1%.*}.goto $1
$GOTOINSTR --constant-set-propagator --dump-c ${1%.*}.goto | tail -n +7 > ${1%.*}_processed.c
