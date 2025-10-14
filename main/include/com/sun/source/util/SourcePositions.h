#ifndef _com_sun_source_util_SourcePositions_h_
#define _com_sun_source_util_SourcePositions_h_
//$ interface com.sun.source.util.SourcePositions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CompilationUnitTree;
				class Tree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $import SourcePositions : public ::java::lang::Object {
	$interface(SourcePositions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getEndPosition(::com::sun::source::tree::CompilationUnitTree* file, ::com::sun::source::tree::Tree* tree) {return 0;}
	virtual int64_t getStartPosition(::com::sun::source::tree::CompilationUnitTree* file, ::com::sun::source::tree::Tree* tree) {return 0;}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_SourcePositions_h_