#ifndef _com_sun_tools_javac_util_Position$LineMap_h_
#define _com_sun_tools_javac_util_Position$LineMap_h_
//$ interface com.sun.tools.javac.util.Position$LineMap
//$ extends com.sun.source.tree.LineMap

#include <com/sun/source/tree/LineMap.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Position$LineMap : public ::com::sun::source::tree::LineMap {
	$interface(Position$LineMap, $NO_CLASS_INIT, ::com::sun::source::tree::LineMap)
public:
	using ::com::sun::source::tree::LineMap::getColumnNumber;
	virtual int32_t getColumnNumber(int32_t pos) {return 0;}
	using ::com::sun::source::tree::LineMap::getLineNumber;
	virtual int32_t getLineNumber(int32_t pos) {return 0;}
	using ::com::sun::source::tree::LineMap::getPosition;
	virtual int32_t getPosition(int32_t line, int32_t column) {return 0;}
	using ::com::sun::source::tree::LineMap::getStartPosition;
	virtual int32_t getStartPosition(int32_t line) {return 0;}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Position$LineMap_h_