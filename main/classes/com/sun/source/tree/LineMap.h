#ifndef _com_sun_source_tree_LineMap_h_
#define _com_sun_source_tree_LineMap_h_
//$ interface com.sun.source.tree.LineMap
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {

class $export LineMap : public ::java::lang::Object {
	$interface(LineMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getColumnNumber(int64_t pos) {return 0;}
	virtual int64_t getLineNumber(int64_t pos) {return 0;}
	virtual int64_t getPosition(int64_t line, int64_t column) {return 0;}
	virtual int64_t getStartPosition(int64_t line) {return 0;}
};

			} // tree
		} // source
	} // sun
} // com

#endif // _com_sun_source_tree_LineMap_h_