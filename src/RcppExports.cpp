// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/flowWorkspace.h"
#include <Rcpp.h>

using namespace Rcpp;

// getPopCounts
Rcpp::List getPopCounts(Rcpp::XPtr<GatingSet> gsPtr, StringVec sampleNames, StringVec subpopulation, bool flowJo, bool isFullPath);
RcppExport SEXP flowWorkspace_getPopCounts(SEXP gsPtrSEXP, SEXP sampleNamesSEXP, SEXP subpopulationSEXP, SEXP flowJoSEXP, SEXP isFullPathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< StringVec >::type sampleNames(sampleNamesSEXP);
    Rcpp::traits::input_parameter< StringVec >::type subpopulation(subpopulationSEXP);
    Rcpp::traits::input_parameter< bool >::type flowJo(flowJoSEXP);
    Rcpp::traits::input_parameter< bool >::type isFullPath(isFullPathSEXP);
    __result = Rcpp::wrap(getPopCounts(gsPtr, sampleNames, subpopulation, flowJo, isFullPath));
    return __result;
END_RCPP
}
// getSplineCoefs
Rcpp::List getSplineCoefs(int channelRange, double maxValue, double pos, double neg, double widthBasis, bool inverse);
RcppExport SEXP flowWorkspace_getSplineCoefs(SEXP channelRangeSEXP, SEXP maxValueSEXP, SEXP posSEXP, SEXP negSEXP, SEXP widthBasisSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type channelRange(channelRangeSEXP);
    Rcpp::traits::input_parameter< double >::type maxValue(maxValueSEXP);
    Rcpp::traits::input_parameter< double >::type pos(posSEXP);
    Rcpp::traits::input_parameter< double >::type neg(negSEXP);
    Rcpp::traits::input_parameter< double >::type widthBasis(widthBasisSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    __result = Rcpp::wrap(getSplineCoefs(channelRange, maxValue, pos, neg, widthBasis, inverse));
    return __result;
END_RCPP
}
// addTrans
void addTrans(Rcpp::XPtr<GatingSet> gsPtr, Rcpp::S4 transformList);
RcppExport SEXP flowWorkspace_addTrans(SEXP gsPtrSEXP, SEXP transformListSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4 >::type transformList(transformListSEXP);
    addTrans(gsPtr, transformList);
    return R_NilValue;
END_RCPP
}
// updateChannels
void updateChannels(Rcpp::S4 gs, Rcpp::DataFrame map);
RcppExport SEXP flowWorkspace_updateChannels(SEXP gsSEXP, SEXP mapSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::S4 >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type map(mapSEXP);
    updateChannels(gs, map);
    return R_NilValue;
END_RCPP
}
// plotGh
void plotGh(XPtr<GatingSet> gs, string sampleName, string output);
RcppExport SEXP flowWorkspace_plotGh(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP outputSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type output(outputSEXP);
    plotGh(gs, sampleName, output);
    return R_NilValue;
END_RCPP
}
// getNodes
StringVec getNodes(XPtr<GatingSet> gs, string sampleName, unsigned short order, bool fullPath, bool showHidden);
RcppExport SEXP flowWorkspace_getNodes(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP orderSEXP, SEXP fullPathSEXP, SEXP showHiddenSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type order(orderSEXP);
    Rcpp::traits::input_parameter< bool >::type fullPath(fullPathSEXP);
    Rcpp::traits::input_parameter< bool >::type showHidden(showHiddenSEXP);
    __result = Rcpp::wrap(getNodes(gs, sampleName, order, fullPath, showHidden));
    return __result;
END_RCPP
}
// getNodeID
NODEID getNodeID(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP flowWorkspace_getNodeID(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    __result = Rcpp::wrap(getNodeID(gs, sampleName, gatePath));
    return __result;
END_RCPP
}
// getParent
NODEID getParent(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP flowWorkspace_getParent(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    __result = Rcpp::wrap(getParent(gs, sampleName, gatePath));
    return __result;
END_RCPP
}
// getChildren
vector<NODEID> getChildren(XPtr<GatingSet> gs, string sampleName, string gatePath, bool showHidden);
RcppExport SEXP flowWorkspace_getChildren(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP, SEXP showHiddenSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< bool >::type showHidden(showHiddenSEXP);
    __result = Rcpp::wrap(getChildren(gs, sampleName, gatePath, showHidden));
    return __result;
END_RCPP
}
// getPopStats
List getPopStats(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP flowWorkspace_getPopStats(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    __result = Rcpp::wrap(getPopStats(gs, sampleName, gatePath));
    return __result;
END_RCPP
}
// getCompensation
List getCompensation(XPtr<GatingSet> gs, string sampleName);
RcppExport SEXP flowWorkspace_getCompensation(SEXP gsSEXP, SEXP sampleNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    __result = Rcpp::wrap(getCompensation(gs, sampleName));
    return __result;
END_RCPP
}
// getTransformations
List getTransformations(XPtr<GatingSet> gs, string sampleName, bool inverse);
RcppExport SEXP flowWorkspace_getTransformations(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< bool >::type inverse(inverseSEXP);
    __result = Rcpp::wrap(getTransformations(gs, sampleName, inverse));
    return __result;
END_RCPP
}
// computeGates
void computeGates(XPtr<GatingSet> gs, string sampleName, NumericVector gainsVec, float extend_val, float extend_to);
RcppExport SEXP flowWorkspace_computeGates(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gainsVecSEXP, SEXP extend_valSEXP, SEXP extend_toSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gainsVec(gainsVecSEXP);
    Rcpp::traits::input_parameter< float >::type extend_val(extend_valSEXP);
    Rcpp::traits::input_parameter< float >::type extend_to(extend_toSEXP);
    computeGates(gs, sampleName, gainsVec, extend_val, extend_to);
    return R_NilValue;
END_RCPP
}
// gating
void gating(XPtr<GatingSet> gs, NumericMatrix orig, string sampleName, NumericVector gainsVec, unsigned short nodeInd, bool recompute, float extend_val, bool ignore_case, bool computeTerminalBool, float timestep);
RcppExport SEXP flowWorkspace_gating(SEXP gsSEXP, SEXP origSEXP, SEXP sampleNameSEXP, SEXP gainsVecSEXP, SEXP nodeIndSEXP, SEXP recomputeSEXP, SEXP extend_valSEXP, SEXP ignore_caseSEXP, SEXP computeTerminalBoolSEXP, SEXP timestepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type orig(origSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gainsVec(gainsVecSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type nodeInd(nodeIndSEXP);
    Rcpp::traits::input_parameter< bool >::type recompute(recomputeSEXP);
    Rcpp::traits::input_parameter< float >::type extend_val(extend_valSEXP);
    Rcpp::traits::input_parameter< bool >::type ignore_case(ignore_caseSEXP);
    Rcpp::traits::input_parameter< bool >::type computeTerminalBool(computeTerminalBoolSEXP);
    Rcpp::traits::input_parameter< float >::type timestep(timestepSEXP);
    gating(gs, orig, sampleName, gainsVec, nodeInd, recompute, extend_val, ignore_case, computeTerminalBool, timestep);
    return R_NilValue;
END_RCPP
}
// getGate
List getGate(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP flowWorkspace_getGate(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    __result = Rcpp::wrap(getGate(gs, sampleName, gatePath));
    return __result;
END_RCPP
}
// getIndices
vector<bool> getIndices(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP flowWorkspace_getIndices(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    __result = Rcpp::wrap(getIndices(gs, sampleName, gatePath));
    return __result;
END_RCPP
}
// setIndices
void setIndices(XPtr<GatingSet> gs, string sampleName, int u, BoolVec ind);
RcppExport SEXP flowWorkspace_setIndices(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP uSEXP, SEXP indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< int >::type u(uSEXP);
    Rcpp::traits::input_parameter< BoolVec >::type ind(indSEXP);
    setIndices(gs, sampleName, u, ind);
    return R_NilValue;
END_RCPP
}
// getGateFlag
bool getGateFlag(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP flowWorkspace_getGateFlag(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    __result = Rcpp::wrap(getGateFlag(gs, sampleName, gatePath));
    return __result;
END_RCPP
}
// getNegateFlag
bool getNegateFlag(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP flowWorkspace_getNegateFlag(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    __result = Rcpp::wrap(getNegateFlag(gs, sampleName, gatePath));
    return __result;
END_RCPP
}
// addGate
NODEID addGate(XPtr<GatingSet> gs, string sampleName, List filter, string gatePath, string popName);
RcppExport SEXP flowWorkspace_addGate(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP filterSEXP, SEXP gatePathSEXP, SEXP popNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< List >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< string >::type popName(popNameSEXP);
    __result = Rcpp::wrap(addGate(gs, sampleName, filter, gatePath, popName));
    return __result;
END_RCPP
}
// boolGating
void boolGating(XPtr<GatingSet> gs, string sampleName, List filter, unsigned nodeID);
RcppExport SEXP flowWorkspace_boolGating(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP filterSEXP, SEXP nodeIDSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< List >::type filter(filterSEXP);
    Rcpp::traits::input_parameter< unsigned >::type nodeID(nodeIDSEXP);
    boolGating(gs, sampleName, filter, nodeID);
    return R_NilValue;
END_RCPP
}
// setGate
void setGate(XPtr<GatingSet> gs, string sampleName, string gatePath, List filter);
RcppExport SEXP flowWorkspace_setGate(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP, SEXP filterSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< List >::type filter(filterSEXP);
    setGate(gs, sampleName, gatePath, filter);
    return R_NilValue;
END_RCPP
}
// removeNode
void removeNode(XPtr<GatingSet> gs, string sampleName, string gatePath);
RcppExport SEXP flowWorkspace_removeNode(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    removeNode(gs, sampleName, gatePath);
    return R_NilValue;
END_RCPP
}
// setNodeName
void setNodeName(XPtr<GatingSet> gs, string sampleName, string gatePath, string newNodeName);
RcppExport SEXP flowWorkspace_setNodeName(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP, SEXP newNodeNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< string >::type newNodeName(newNodeNameSEXP);
    setNodeName(gs, sampleName, gatePath, newNodeName);
    return R_NilValue;
END_RCPP
}
// setNodeFlag
void setNodeFlag(XPtr<GatingSet> gs, string sampleName, string gatePath, bool hidden);
RcppExport SEXP flowWorkspace_setNodeFlag(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP gatePathSEXP, SEXP hiddenSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< string >::type gatePath(gatePathSEXP);
    Rcpp::traits::input_parameter< bool >::type hidden(hiddenSEXP);
    setNodeFlag(gs, sampleName, gatePath, hidden);
    return R_NilValue;
END_RCPP
}
// getSingleCellExpression
NumericMatrix getSingleCellExpression(XPtr<GatingSet> gs, string sampleName, NODEID_vec nodeIDs, NumericMatrix data, CharacterVector markers, bool threshold);
RcppExport SEXP flowWorkspace_getSingleCellExpression(SEXP gsSEXP, SEXP sampleNameSEXP, SEXP nodeIDsSEXP, SEXP dataSEXP, SEXP markersSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< NODEID_vec >::type nodeIDs(nodeIDsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type markers(markersSEXP);
    Rcpp::traits::input_parameter< bool >::type threshold(thresholdSEXP);
    __result = Rcpp::wrap(getSingleCellExpression(gs, sampleName, nodeIDs, data, markers, threshold));
    return __result;
END_RCPP
}
// parseWorkspace
XPtr<GatingSet> parseWorkspace(string fileName, StringVec sampleIDs, StringVec sampleNames, bool isParseGate, unsigned short sampNloc, int xmlParserOption, unsigned short wsType);
RcppExport SEXP flowWorkspace_parseWorkspace(SEXP fileNameSEXP, SEXP sampleIDsSEXP, SEXP sampleNamesSEXP, SEXP isParseGateSEXP, SEXP sampNlocSEXP, SEXP xmlParserOptionSEXP, SEXP wsTypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< string >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< StringVec >::type sampleIDs(sampleIDsSEXP);
    Rcpp::traits::input_parameter< StringVec >::type sampleNames(sampleNamesSEXP);
    Rcpp::traits::input_parameter< bool >::type isParseGate(isParseGateSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type sampNloc(sampNlocSEXP);
    Rcpp::traits::input_parameter< int >::type xmlParserOption(xmlParserOptionSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type wsType(wsTypeSEXP);
    __result = Rcpp::wrap(parseWorkspace(fileName, sampleIDs, sampleNames, isParseGate, sampNloc, xmlParserOption, wsType));
    return __result;
END_RCPP
}
// getSamples
StringVec getSamples(XPtr<GatingSet> gsPtr);
RcppExport SEXP flowWorkspace_getSamples(SEXP gsPtrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    __result = Rcpp::wrap(getSamples(gsPtr));
    return __result;
END_RCPP
}
// NewGatingSet
XPtr<GatingSet> NewGatingSet(XPtr<GatingSet> gsPtr, string sampleName, StringVec newSampleNames);
RcppExport SEXP flowWorkspace_NewGatingSet(SEXP gsPtrSEXP, SEXP sampleNameSEXP, SEXP newSampleNamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gsPtr(gsPtrSEXP);
    Rcpp::traits::input_parameter< string >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< StringVec >::type newSampleNames(newSampleNamesSEXP);
    __result = Rcpp::wrap(NewGatingSet(gsPtr, sampleName, newSampleNames));
    return __result;
END_RCPP
}
// NewGatingSet_rootOnly
XPtr<GatingSet> NewGatingSet_rootOnly(StringVec sampleNames);
RcppExport SEXP flowWorkspace_NewGatingSet_rootOnly(SEXP sampleNamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< StringVec >::type sampleNames(sampleNamesSEXP);
    __result = Rcpp::wrap(NewGatingSet_rootOnly(sampleNames));
    return __result;
END_RCPP
}
// saveGatingSet
void saveGatingSet(XPtr<GatingSet> gs, string fileName);
RcppExport SEXP flowWorkspace_saveGatingSet(SEXP gsSEXP, SEXP fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type fileName(fileNameSEXP);
    saveGatingSet(gs, fileName);
    return R_NilValue;
END_RCPP
}
// loadGatingSet
XPtr<GatingSet> loadGatingSet(string fileName);
RcppExport SEXP flowWorkspace_loadGatingSet(SEXP fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< string >::type fileName(fileNameSEXP);
    __result = Rcpp::wrap(loadGatingSet(fileName));
    return __result;
END_RCPP
}
// CloneGatingSet
XPtr<GatingSet> CloneGatingSet(XPtr<GatingSet> gs, StringVec samples);
RcppExport SEXP flowWorkspace_CloneGatingSet(SEXP gsSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< StringVec >::type samples(samplesSEXP);
    __result = Rcpp::wrap(CloneGatingSet(gs, samples));
    return __result;
END_RCPP
}
// combineGatingSet
XPtr<GatingSet> combineGatingSet(Rcpp::List gsList, Rcpp::List sampleList);
RcppExport SEXP flowWorkspace_combineGatingSet(SEXP gsListSEXP, SEXP sampleListSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type gsList(gsListSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type sampleList(sampleListSEXP);
    __result = Rcpp::wrap(combineGatingSet(gsList, sampleList));
    return __result;
END_RCPP
}
// setSample
void setSample(XPtr<GatingSet> gs, string oldName, string newName);
RcppExport SEXP flowWorkspace_setSample(SEXP gsSEXP, SEXP oldNameSEXP, SEXP newNameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<GatingSet> >::type gs(gsSEXP);
    Rcpp::traits::input_parameter< string >::type oldName(oldNameSEXP);
    Rcpp::traits::input_parameter< string >::type newName(newNameSEXP);
    setSample(gs, oldName, newName);
    return R_NilValue;
END_RCPP
}
// getLogLevel
unsigned short getLogLevel();
RcppExport SEXP flowWorkspace_getLogLevel() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(getLogLevel());
    return __result;
END_RCPP
}
// setLogLevel
void setLogLevel(unsigned short loglevel);
RcppExport SEXP flowWorkspace_setLogLevel(SEXP loglevelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< unsigned short >::type loglevel(loglevelSEXP);
    setLogLevel(loglevel);
    return R_NilValue;
END_RCPP
}
// toggleErrorFlag
void toggleErrorFlag();
RcppExport SEXP flowWorkspace_toggleErrorFlag() {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    toggleErrorFlag();
    return R_NilValue;
END_RCPP
}
