#ifndef _com_sun_tools_javac_jvm_PoolWriter_h_
#define _com_sun_tools_javac_jvm_PoolWriter_h_
//$ class com.sun.tools.javac.jvm.PoolWriter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_ENTRIES")
#undef MAX_ENTRIES
#pragma push_macro("MAX_STRING_LENGTH")
#undef MAX_STRING_LENGTH
#pragma push_macro("POOL_BUF_SIZE")
#undef POOL_BUF_SIZE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
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
					class PoolConstant$Dynamic;
					class PoolConstant$LoadableConstant;
					class PoolWriter$SharedSignatureGenerator;
					class PoolWriter$WriteablePoolHelper;
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
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class LinkedHashSet;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import PoolWriter : public ::java::lang::Object {
	$class(PoolWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PoolWriter();
	void init$(::com::sun::tools::javac::code::Types* types, ::com::sun::tools::javac::util::Names* names);
	::com::sun::tools::javac::util::Name* classSig(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Type* descriptorType(::com::sun::tools::javac::code::Symbol* s);
	virtual void enterInner(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	int32_t makeBootstrapEntry(::com::sun::tools::javac::jvm::PoolConstant$Dynamic* dynamic);
	virtual int32_t putClass(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym);
	virtual int32_t putClass(::com::sun::tools::javac::code::Type* t);
	virtual int32_t putConstant(Object$* o);
	virtual int32_t putConstant(::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant* c);
	virtual int32_t putDescriptor(::com::sun::tools::javac::code::Type* t);
	virtual int32_t putDescriptor(::com::sun::tools::javac::code::Symbol* s);
	virtual int32_t putDynamic(::com::sun::tools::javac::jvm::PoolConstant$Dynamic* d);
	virtual int32_t putMember(::com::sun::tools::javac::code::Symbol* s);
	virtual int32_t putModule(::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod);
	virtual int32_t putName(::com::sun::tools::javac::util::Name* name);
	virtual int32_t putNameAndType(::com::sun::tools::javac::code::Symbol* s);
	virtual int32_t putPackage(::com::sun::tools::javac::code::Symbol$PackageSymbol* pkg);
	virtual int32_t putSignature(::com::sun::tools::javac::code::Symbol* s);
	virtual void reset();
	virtual int32_t size();
	::com::sun::tools::javac::util::Name* typeSig(::com::sun::tools::javac::code::Type* type);
	virtual void writePool(::java::io::OutputStream* out);
	static const int32_t MAX_ENTRIES = 0x0000FFFF;
	static const int32_t MAX_STRING_LENGTH = 0x0000FFFF;
	static const int32_t POOL_BUF_SIZE = 32767;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::jvm::PoolWriter$WriteablePoolHelper* pool = nullptr;
	::com::sun::tools::javac::jvm::PoolWriter$SharedSignatureGenerator* signatureGen = nullptr;
	::java::util::LinkedHashSet* innerClasses = nullptr;
	::java::util::Map* bootstrapMethods = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("MAX_ENTRIES")
#pragma pop_macro("MAX_STRING_LENGTH")
#pragma pop_macro("POOL_BUF_SIZE")

#endif // _com_sun_tools_javac_jvm_PoolWriter_h_