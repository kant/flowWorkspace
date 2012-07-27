/*
 * workspace.hpp
 *
 *  Created on: Mar 22, 2012
 *      Author: wjiang2
 */

#ifndef WORKSPACE_HPP_
#define WORKSPACE_HPP_
#include <vector>
#include <string>
#include <libxml/xpath.h>
#include <libxml/parser.h>
#include "wsNode.hpp"
#include "transformation.hpp"
#include "util.hpp"
#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <boost/algorithm/string.hpp>

using namespace std;


using namespace std;
/*TODO: so far I will see the differenc between win and mac workspace in terms of xpath(like xpath of sample node)
 * if this is the case eventually we can try to use one template class (eliminate two derived classes )
 * with T structure that stores different versions of xpaths for win/mac,for example:
 *
 * struct winWorkspace{
 * xpath_sample=xxx
 * ....
 * }
 *
 * struct macWorkspace{
 * xpath_sample=xxx
 * ....
 * }
 *
 * this may potentially reduce the amount of code
 *
 */
class compensation{
public:
	string cid;
	string prefix;
	string suffix;
	string name;
	string comment;// store "Acquisition-defined" when the spillOver matrix is not supplied and cid==-1
	vector<string> marker;
	vector<double> spillOver;
};


struct xpath{
	string group;
	string sampleRef;
	string sample;
	string sampleNode;
	string popNode;
	unsigned short sampNloc;//get FCS filename(or sampleName) from either $FIL keyword or name attribute of sampleNode
};



class workspace{
public:
	 xpath nodePath;
//protected:

	 xmlDoc * doc;
	 unsigned short dMode;//debug mode passed from gatingset class
public:
	 ~workspace();
	 virtual string xPathSample(string sampleID)=0;
	 virtual isTransMap getTransFlag(wsSampleNode sampleNode)=0;
	 virtual trans_local getTransformation(wsRootNode,const compensation &,const isTransMap &,trans_global_vec *)=0;
	 virtual compensation getCompensation(wsSampleNode)=0;
	 virtual trans_global_vec getGlobalTrans()=0;
	 virtual vector <string> getSampleID(unsigned short)=0;
	 virtual string getSampleName(wsSampleNode &)=0;
	 virtual wsRootNode getRoot(wsSampleNode sampleNode)=0;
	 virtual wsPopNodeSet getSubPop(wsNode *)=0;
	 virtual gate * getGate(wsPopNode &)=0;//gate is dynamically allocated within this function,it is currently freed within gate pointer owner object nodeProperties
	 virtual nodeProperties * to_popNode(wsRootNode &)=0;
	 virtual nodeProperties * to_popNode(wsPopNode &,bool isGating)=0;

};


#endif /* WORKSPACE_HPP_ */

