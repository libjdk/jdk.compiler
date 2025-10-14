#ifndef _com_sun_tools_javac_jvm_JNIWriter_h_
#define _com_sun_tools_javac_jvm_JNIWriter_h_
//$ class com.sun.tools.javac.jvm.JNIWriter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
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
				namespace jvm {
					class JNIWriter$EncoderType;
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
					class Log;
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import JNIWriter : public ::java::lang::Object {
	$class(JNIWriter, 0, ::java::lang::Object)
public:
	JNIWriter();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void cppGuardBegin(::java::io::PrintWriter* out);
	virtual void cppGuardEnd(::java::io::PrintWriter* out);
	static $String* encode(::java::lang::CharSequence* name, ::com::sun::tools::javac::jvm::JNIWriter$EncoderType* mtype);
	static $String* encodeChar(char16_t ch);
	virtual $String* encodeMethod(::com::sun::tools::javac::code::Symbol* msym, ::com::sun::tools::javac::code::Symbol$ClassSymbol* clazz, bool isOverloaded);
	virtual void fileTop(::java::io::PrintWriter* out);
	virtual void guardBegin(::java::io::PrintWriter* out, $String* cname);
	virtual void guardEnd(::java::io::PrintWriter* out);
	static bool hasFlag(::com::sun::tools::javac::code::Symbol* m, int32_t flag);
	virtual void includes(::java::io::PrintWriter* out);
	static ::com::sun::tools::javac::jvm::JNIWriter* instance(::com::sun::tools::javac::util::Context* context);
	static bool isFinal(::com::sun::tools::javac::code::Symbol* s);
	static bool isNative(::com::sun::tools::javac::code::Symbol* s);
	static bool isStatic(::com::sun::tools::javac::code::Symbol* s);
	static bool isSynthetic(::com::sun::tools::javac::code::Symbol* s);
	static bool isalnum(char16_t ch);
	static bool isprint(char16_t ch);
	$String* jniType(::com::sun::tools::javac::code::Type* t);
	void lazyInit();
	virtual bool needsHeader(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	bool needsHeader(::com::sun::tools::javac::code::Symbol$ClassSymbol* c, bool checkNestedClasses);
	static void printStaticDefines(::java::io::PrintWriter* out, ::com::sun::tools::javac::util::Pair* p);
	virtual ::javax::tools::FileObject* write(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void write(::java::io::PrintWriter* out, ::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	virtual void writeMethods(::java::io::PrintWriter* out, ::com::sun::tools::javac::code::Symbol$ClassSymbol* sym, $String* cname);
	virtual void writeStatics(::java::io::PrintWriter* out, ::com::sun::tools::javac::code::Symbol$ClassSymbol* sym);
	static ::com::sun::tools::javac::util::Context$Key* jniWriterKey;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	bool verbose = false;
	bool checkAll = false;
	bool multiModuleMode = false;
	::com::sun::tools::javac::util::Context* context = nullptr;
	static bool isWindows;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_jvm_JNIWriter_h_