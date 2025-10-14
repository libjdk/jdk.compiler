#ifndef _com_sun_source_util_DocSourcePositions_h_
#define _com_sun_source_util_DocSourcePositions_h_
//$ interface com.sun.source.util.DocSourcePositions
//$ extends com.sun.source.util.SourcePositions

#include <com/sun/source/util/SourcePositions.h>

namespace com {
	namespace sun {
		namespace source {
			namespace doctree {
				class DocCommentTree;
				class DocTree;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace source {
			namespace tree {
				class CompilationUnitTree;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace source {
			namespace util {

class $import DocSourcePositions : public ::com::sun::source::util::SourcePositions {
	$interface(DocSourcePositions, $NO_CLASS_INIT, ::com::sun::source::util::SourcePositions)
public:
	using ::com::sun::source::util::SourcePositions::getEndPosition;
	virtual int64_t getEndPosition(::com::sun::source::tree::CompilationUnitTree* file, ::com::sun::source::doctree::DocCommentTree* comment, ::com::sun::source::doctree::DocTree* tree) {return 0;}
	using ::com::sun::source::util::SourcePositions::getStartPosition;
	virtual int64_t getStartPosition(::com::sun::source::tree::CompilationUnitTree* file, ::com::sun::source::doctree::DocCommentTree* comment, ::com::sun::source::doctree::DocTree* tree) {return 0;}
};

			} // util
		} // source
	} // sun
} // com

#endif // _com_sun_source_util_DocSourcePositions_h_