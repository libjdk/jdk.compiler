#ifndef _com_sun_tools_javac_jvm_PoolWriter$SharedSignatureGenerator_h_
#define _com_sun_tools_javac_jvm_PoolWriter$SharedSignatureGenerator_h_
//$ class com.sun.tools.javac.jvm.PoolWriter$SharedSignatureGenerator
//$ extends com.sun.tools.javac.code.Types$SignatureGenerator

#include <com/sun/tools/javac/code/Types$SignatureGenerator.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
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
				namespace jvm {
					class PoolWriter;
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
					class Name;
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

class $export PoolWriter$SharedSignatureGenerator : public ::com::sun::tools::javac::code::Types$SignatureGenerator {
	$class(PoolWriter$SharedSignatureGenerator, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SignatureGenerator)
public:
	PoolWriter$SharedSignatureGenerator();
	using ::com::sun::tools::javac::code::Types$SignatureGenerator::assembleSig;
	void init$(::com::sun::tools::javac::jvm::PoolWriter* this$0, ::com::sun::tools::javac::code::Types* types);
	virtual void append(char16_t ch) override;
	virtual void append($bytes* ba) override;
	virtual void append(::com::sun::tools::javac::util::Name* name) override;
	virtual void assembleSig(::com::sun::tools::javac::code::Type* type) override;
	virtual void classReference(::com::sun::tools::javac::code::Symbol$ClassSymbol* c) override;
	virtual void reset();
	virtual ::com::sun::tools::javac::util::Name* toName();
	::com::sun::tools::javac::jvm::PoolWriter* this$0 = nullptr;
	::com::sun::tools::javac::util::ByteBuffer* sigbuf = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolWriter$SharedSignatureGenerator_h_