#ifndef _com_sun_tools_javac_jvm_StringConcat_h_
#define _com_sun_tools_javac_jvm_StringConcat_h_
//$ class com.sun.tools.javac.jvm.StringConcat
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_INDY_CONCAT_ARG_SLOTS")
#undef MAX_INDY_CONCAT_ARG_SLOTS
#pragma push_macro("TAG_ARG")
#undef TAG_ARG
#pragma push_macro("TAG_CONST")
#undef TAG_CONST

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symtab;
					class Type;
					class Types;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Resolve;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class Gen;
					class Items$Item;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree;
					class JCTree$JCAssignOp;
					class JCTree$JCBinary;
					class JCTree$JCExpression;
					class TreeMaker;
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
					class Context;
					class Context$Key;
					class List;
					class Names;
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

class $import StringConcat : public ::java::lang::Object {
	$class(StringConcat, 0, ::java::lang::Object)
public:
	StringConcat();
	void init$(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::util::List* collect(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::List* res);
	virtual ::com::sun::tools::javac::util::List* collectAll(::com::sun::tools::javac::tree::JCTree* tree);
	virtual ::com::sun::tools::javac::util::List* collectAll(::com::sun::tools::javac::tree::JCTree$JCExpression* lhs, ::com::sun::tools::javac::tree::JCTree$JCExpression* rhs);
	static ::com::sun::tools::javac::jvm::StringConcat* instance(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::jvm::StringConcat* makeConcat(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeConcat(::com::sun::tools::javac::tree::JCTree$JCAssignOp* tree) {return nullptr;}
	virtual ::com::sun::tools::javac::jvm::Items$Item* makeConcat(::com::sun::tools::javac::tree::JCTree$JCBinary* tree) {return nullptr;}
	virtual ::com::sun::tools::javac::code::Type* sharpestAccessible(::com::sun::tools::javac::code::Type* originalType);
	static const int32_t MAX_INDY_CONCAT_ARG_SLOTS = 200;
	static const char16_t TAG_ARG = ((char16_t)1);
	static const char16_t TAG_CONST = ((char16_t)2);
	::com::sun::tools::javac::jvm::Gen* gen = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::java::util::Map* sbAppends = nullptr;
	::com::sun::tools::javac::comp::Resolve* rs = nullptr;
	static ::com::sun::tools::javac::util::Context$Key* concatKey;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("MAX_INDY_CONCAT_ARG_SLOTS")
#pragma pop_macro("TAG_ARG")
#pragma pop_macro("TAG_CONST")

#endif // _com_sun_tools_javac_jvm_StringConcat_h_