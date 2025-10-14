#ifndef _com_sun_tools_javac_comp_Lower$LowerSignatureGenerator_h_
#define _com_sun_tools_javac_comp_Lower$LowerSignatureGenerator_h_
//$ class com.sun.tools.javac.comp.Lower$LowerSignatureGenerator
//$ extends com.sun.tools.javac.code.Types$SignatureGenerator

#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Lower;
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
					class Name;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Lower$LowerSignatureGenerator : public ::com::sun::tools::javac::code::Types$SignatureGenerator {
	$class(Lower$LowerSignatureGenerator, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SignatureGenerator)
public:
	Lower$LowerSignatureGenerator();
	void init$(::com::sun::tools::javac::comp::Lower* this$0);
	virtual void append(char16_t ch) override;
	virtual void append($bytes* ba) override;
	virtual void append(::com::sun::tools::javac::util::Name* name) override;
	virtual $String* toString() override;
	::com::sun::tools::javac::comp::Lower* this$0 = nullptr;
	::java::lang::StringBuilder* sb = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Lower$LowerSignatureGenerator_h_