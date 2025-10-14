#ifndef _com_sun_tools_javac_jvm_PoolReader_h_
#define _com_sun_tools_javac_jvm_PoolReader_h_
//$ class com.sun.tools.javac.jvm.PoolReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ClassSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$PackageSymbol;
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
				namespace jvm {
					class ClassReader;
					class PoolConstant$NameAndType;
					class PoolReader$ImmutablePoolHelper;
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
					class Name$NameMapper;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class BitSet;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export PoolReader : public ::java::lang::Object {
	$class(PoolReader, 0, ::java::lang::Object)
public:
	PoolReader();
	void init$(::com::sun::tools::javac::util::ByteBuffer* buf);
	void init$(::com::sun::tools::javac::jvm::ClassReader* reader, ::com::sun::tools::javac::util::Names* names, ::com::sun::tools::javac::code::Symtab* syms);
	void init$(::com::sun::tools::javac::jvm::ClassReader* reader, ::com::sun::tools::javac::util::ByteBuffer* buf, ::com::sun::tools::javac::util::Names* names, ::com::sun::tools::javac::code::Symtab* syms);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* getClass(int32_t index);
	virtual $Object* getConstant(int32_t index);
	virtual ::com::sun::tools::javac::code::Symbol$ModuleSymbol* getModule(int32_t index);
	virtual ::com::sun::tools::javac::util::Name* getName(int32_t index);
	virtual ::com::sun::tools::javac::jvm::PoolConstant$NameAndType* getNameAndType(int32_t index);
	virtual ::com::sun::tools::javac::code::Symbol$PackageSymbol* getPackage(int32_t index);
	virtual ::com::sun::tools::javac::code::Type* getType(int32_t index);
	$Object* getUtf8(int32_t index, ::com::sun::tools::javac::util::Name$NameMapper* mapper);
	virtual bool hasTag(int32_t index, int32_t tag);
	virtual $Object* peekClassName(int32_t index, ::com::sun::tools::javac::util::Name$NameMapper* mapper);
	virtual $Object* peekModuleName(int32_t index, ::com::sun::tools::javac::util::Name$NameMapper* mapper);
	virtual $Object* peekName(int32_t index, ::com::sun::tools::javac::util::Name$NameMapper* mapper);
	virtual $Object* peekPackageName(int32_t index, ::com::sun::tools::javac::util::Name$NameMapper* mapper);
	virtual int32_t readPool(::com::sun::tools::javac::util::ByteBuffer* poolbuf, int32_t offset);
	$Object* resolve(::com::sun::tools::javac::util::ByteBuffer* poolbuf, int32_t tag, int32_t offset);
	int32_t sizeof$(int32_t tag);
	::com::sun::tools::javac::jvm::ClassReader* reader = nullptr;
	::com::sun::tools::javac::util::ByteBuffer* buf = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::jvm::PoolReader$ImmutablePoolHelper* pool = nullptr;
	static ::java::util::BitSet* classCP;
	static ::java::util::BitSet* constantCP;
	static ::java::util::BitSet* moduleCP;
	static ::java::util::BitSet* packageCP;
	static ::java::util::BitSet* utf8CP;
	static ::java::util::BitSet* nameAndTypeCP;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_PoolReader_h_