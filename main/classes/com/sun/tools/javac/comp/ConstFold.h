#ifndef _com_sun_tools_javac_comp_ConstFold_h_
#define _com_sun_tools_javac_comp_ConstFold_h_
//$ class com.sun.tools.javac.comp.ConstFold
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symtab;
					class Type;
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
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class ConstFold : public ::java::lang::Object {
	$class(ConstFold, 0, ::java::lang::Object)
public:
	ConstFold();
	void init$(::com::sun::tools::javac::util::Context* context);
	static ::java::lang::Integer* b2i(bool b);
	virtual ::com::sun::tools::javac::code::Type* coerce(::com::sun::tools::javac::code::Type* etype, ::com::sun::tools::javac::code::Type* ttype);
	static double doubleValue(Object$* x);
	static float floatValue(Object$* x);
	virtual ::com::sun::tools::javac::code::Type* fold1(int32_t opcode, ::com::sun::tools::javac::code::Type* operand);
	virtual ::com::sun::tools::javac::code::Type* fold2(int32_t opcode, ::com::sun::tools::javac::code::Type* left, ::com::sun::tools::javac::code::Type* right);
	static ::com::sun::tools::javac::comp::ConstFold* instance(::com::sun::tools::javac::util::Context* context);
	static int32_t intValue(Object$* x);
	static int64_t longValue(Object$* x);
	static ::com::sun::tools::javac::util::Context$Key* constFoldKey;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	static ::java::lang::Integer* minusOne;
	static ::java::lang::Integer* zero;
	static ::java::lang::Integer* one;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_ConstFold_h_