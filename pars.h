const Long64_t maxEvents = 5000; //per mettere un limite sugli eventi da processare

const int teTiBins = 9000;
const double teTiFrom = -10, teTiTo = 80;
const double teQFrom = 0, teQTo = 100000000000; //mettere qui tagli se servono

const int tiBins = 1000;
const double tiFrom = -4, tiTo = 4;
const double tiOffsGlobal = 16;

const double wfEx = 0.002; //messo a caso, da mettere bene
const double wfEy = 0.1; //messo a caso, da mettere bene

const double CF = 0.28; //constant fraction, da controllare ottimizzazione

const int doLogn = 0; //azioni da fare in analysis.c
const int doGenTemplate = 0;
const int doFitTemplate = 1;
const int doCorrectTrigger = 0;

TString splineFileName = "../data/out/splines40_3.root"; //posizione del file con il template da usare per i fit
//TString splineFileName = "out/splines2.5_1.root";
//TString splineFileName = "out/provaIvano.root";