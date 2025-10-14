#ifndef _com_sun_tools_javac_jvm_ClassWriter_h_
#define _com_sun_tools_javac_jvm_ClassWriter_h_
//$ class com.sun.tools.javac.jvm.ClassWriter
//$ extends com.sun.tools.javac.jvm.ClassFile

#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <java/lang/Array.h>

#pragma push_macro("CLASS_BUF_SIZE")
#undef CLASS_BUF_SIZE
#pragma push_macro("DATA_BUF_SIZE")
#undef DATA_BUF_SIZE
#pragma push_macro("FULL_FRAME")
#undef FULL_FRAME
#pragma push_macro("MAX_LOCAL_LENGTH_DIFF")
#undef MAX_LOCAL_LENGTH_DIFF
#pragma push_macro("SAME_FRAME_EXTENDED")
#undef SAME_FRAME_EXTENDED
#pragma push_macro("SAME_FRAME_SIZE")
#undef SAME_FRAME_SIZE
#pragma push_macro("SAME_LOCALS_1_STACK_ITEM_EXTENDED")
#undef SAME_LOCALS_1_STACK_ITEM_EXTENDED

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Attribute$RetentionPolicy;
					class Attribute$TypeCompound;
					class Preview;
					class Scope;
					class Source;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$VarSymbol;
					class Type;
					class TypeAnnotationPosition;
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
					class Check;
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
					class ClassWriter$AttributeWriter;
					class Code;
					class PoolWriter;
					class Target;
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
					class Context;
					class Context$Key;
					class List;
					class ListBuffer;
					class Log;
					class Name;
					class Names;
					class Options;
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
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class ToIntFunction;
		}
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $import ClassWriter : public ::com::sun::tools::javac::jvm::ClassFile {
	$class(ClassWriter, 0, ::com::sun::tools::javac::jvm::ClassFile)
public:
	ClassWriter();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void addExtraAttributes(::java::util::function::ToIntFunction* addExtraAttributes);
	virtual int32_t adjustFlags(int64_t flags);
	virtual int32_t beginAttrs();
	virtual void endAttr(int32_t index);
	virtual void endAttrs(int32_t index, int32_t count);
	static $String* flagNames(int64_t flags);
	virtual int64_t getLastModified(::javax::tools::FileObject* filename);
	static ::com::sun::tools::javac::jvm::ClassWriter* instance(::com::sun::tools::javac::util::Context* context);
	static ::java::util::Set* lambda$writeModuleAttribute$0(::com::sun::tools::javac::code::Symbol$ClassSymbol* s);
	void lambda$writeModuleAttribute$1(::com::sun::tools::javac::code::Symbol$ClassSymbol* impl);
	void lambda$writeModuleAttribute$2(::com::sun::tools::javac::code::Symbol$ClassSymbol* srvc, ::java::util::Set* impls);
	void listNested(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::ListBuffer* seen);
	bool needsLocalVariableTypeEntry(::com::sun::tools::javac::code::Type* t);
	virtual void putChar(::com::sun::tools::javac::util::ByteBuffer* buf, int32_t op, int32_t x);
	virtual void putInt(::com::sun::tools::javac::util::ByteBuffer* buf, int32_t adr, int32_t x);
	virtual int32_t writeAttr(::com::sun::tools::javac::util::Name* attrName);
	virtual void writeBootstrapMethods();
	virtual ::javax::tools::JavaFileObject* writeClass(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void writeClassFile(::java::io::OutputStream* out, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void writeCode(::com::sun::tools::javac::jvm::Code* code);
	virtual void writeCompoundAttribute(::com::sun::tools::javac::code::Attribute$Compound* c);
	virtual int32_t writeEnclosingMethodAttribute(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual int32_t writeEnclosingMethodAttribute(::com::sun::tools::javac::util::Name* attributeName, ::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual int32_t writeExtraAttributes(::com::sun::tools::javac::code::Symbol* sym);
	virtual int32_t writeExtraClassAttributes(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void writeField(::com::sun::tools::javac::code::Symbol$VarSymbol* v);
	virtual void writeFields(::com::sun::tools::javac::code::Scope* s);
	virtual int32_t writeFlagAttrs(int64_t flags);
	virtual void writeInnerClasses();
	virtual int32_t writeJavaAnnotations(::com::sun::tools::javac::util::List* attrs);
	virtual int32_t writeMemberAttrs(::com::sun::tools::javac::code::Symbol* sym, bool isRecordComponent);
	virtual void writeMethod(::com::sun::tools::javac::code::Symbol$MethodSymbol* m);
	virtual int32_t writeMethodParametersAttr(::com::sun::tools::javac::code::Symbol$MethodSymbol* m);
	virtual void writeMethods(::com::sun::tools::javac::code::Scope* s);
	virtual int32_t writeModuleAttribute(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual int32_t writeNestHostIfNeeded(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym);
	virtual int32_t writeNestMembersIfNeeded(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym);
	void writeParamAnnotations(::com::sun::tools::javac::util::List* params, ::com::sun::tools::javac::code::Attribute$RetentionPolicy* retention);
	void writeParamAnnotations(::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::code::Attribute$RetentionPolicy* retention);
	virtual int32_t writeParameterAttrs(::com::sun::tools::javac::util::List* vars);
	virtual int32_t writePermittedSubclassesIfNeeded(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym);
	virtual void writePosition(::com::sun::tools::javac::code::TypeAnnotationPosition* p);
	virtual int32_t writeRecordAttribute(::com::sun::tools::javac::code::Symbol$ClassSymbol* csym);
	virtual void writeStackMap(::com::sun::tools::javac::jvm::Code* code);
	virtual void writeStackMapType(::com::sun::tools::javac::code::Type* t);
	virtual void writeTypeAnnotation(::com::sun::tools::javac::code::Attribute$TypeCompound* c);
	virtual int32_t writeTypeAnnotations(::com::sun::tools::javac::util::List* typeAnnos, bool inCode);
	static ::com::sun::tools::javac::util::Context$Key* classWriterKey;
	::com::sun::tools::javac::util::Options* options = nullptr;
	bool verbose = false;
	bool emitSourceFile = false;
	bool genCrt = false;
	bool debugstackmap = false;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::jvm::Target* target = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::comp::Check* check = nullptr;
	bool multiModuleMode = false;
	::com::sun::tools::javac::util::List* extraAttributeHooks = nullptr;
	static const int32_t DATA_BUF_SIZE = 0x0000FFF0;
	static const int32_t CLASS_BUF_SIZE = 0x0001FFF0;
	::com::sun::tools::javac::util::ByteBuffer* databuf = nullptr;
	::com::sun::tools::javac::util::ByteBuffer* poolbuf = nullptr;
	::com::sun::tools::javac::jvm::PoolWriter* poolWriter = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	static const int32_t SAME_FRAME_SIZE = 64;
	static const int32_t SAME_LOCALS_1_STACK_ITEM_EXTENDED = 247;
	static const int32_t SAME_FRAME_EXTENDED = 251;
	static const int32_t FULL_FRAME = 255;
	static const int32_t MAX_LOCAL_LENGTH_DIFF = 4;
	bool dumpClassModifiers = false;
	bool dumpFieldModifiers = false;
	bool dumpInnerClassModifiers = false;
	bool dumpMethodModifiers = false;
	static $StringArray* flagName;
	::com::sun::tools::javac::jvm::ClassWriter$AttributeWriter* awriter = nullptr;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS_BUF_SIZE")
#pragma pop_macro("DATA_BUF_SIZE")
#pragma pop_macro("FULL_FRAME")
#pragma pop_macro("MAX_LOCAL_LENGTH_DIFF")
#pragma pop_macro("SAME_FRAME_EXTENDED")
#pragma pop_macro("SAME_FRAME_SIZE")
#pragma pop_macro("SAME_LOCALS_1_STACK_ITEM_EXTENDED")

#endif // _com_sun_tools_javac_jvm_ClassWriter_h_