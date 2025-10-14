#ifndef _com_sun_tools_javac_jvm_CRTable_h_
#define _com_sun_tools_javac_jvm_CRTable_h_
//$ class com.sun.tools.javac.jvm.CRTable
//$ extends com.sun.tools.javac.jvm.CRTFlags

#include <com/sun/tools/javac/jvm/CRTFlags.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class EndPosTable;
					class JCTree$JCMethodDecl;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class ByteBuffer;
					class ListBuffer;
					class Log;
					class Position$LineMap;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import CRTable : public ::com::sun::tools::javac::jvm::CRTFlags {
	$class(CRTable, $NO_CLASS_INIT, ::com::sun::tools::javac::jvm::CRTFlags)
public:
	CRTable();
	void init$(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree, ::com::sun::tools::javac::tree::EndPosTable* endPosTable);
	int32_t encodePosition(int32_t pos, ::com::sun::tools::javac::util::Position$LineMap* lineMap, ::com::sun::tools::javac::util::Log* log);
	$String* getTypes(int32_t flags);
	virtual int32_t length();
	virtual void put(Object$* tree, int32_t flags, int32_t startPc, int32_t endPc);
	virtual int32_t writeCRT(::com::sun::tools::javac::util::ByteBuffer* databuf, ::com::sun::tools::javac::util::Position$LineMap* lineMap, ::com::sun::tools::javac::util::Log* log);
	static const bool crtDebug = false;
	::com::sun::tools::javac::util::ListBuffer* entries = nullptr;
	::java::util::Map* positions = nullptr;
	::com::sun::tools::javac::tree::EndPosTable* endPosTable = nullptr;
	::com::sun::tools::javac::tree::JCTree$JCMethodDecl* methodTree = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_CRTable_h_