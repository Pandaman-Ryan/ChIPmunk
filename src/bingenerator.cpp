#include "src/bingenerator.h"

/*
  Constructor for BinGenerator
  
  Set up binning over a region, or over the entire genome
  Initialize currentBin to the first bin
 */
BinGenerator::BinGenerator(const Options& options) {
  // TODO An/Michael
  currentBin = new GenomeBin("test", 0, 0); // TODO this is a dummy
}

/*
  Inputs: none

  Outputs: 
  - bool: return true if there are still more bins left, else false

  Set currentBin to be the next bin
 */
bool BinGenerator::GotoNextBin() {
  // TODO An/Michael
  return true;
}

/*
  Inputs: none

  Outputs:
  - GenomeBin: the current genome bin that was set in GotoNextBin
 */
const GenomeBin BinGenerator::GetCurrentBin() {
  return *currentBin;
}

BinGenerator::~BinGenerator() {
  delete currentBin;
}