#ifndef _com_sun_tools_javac_processing_JavacFiler_h_
#define _com_sun_tools_javac_processing_JavacFiler_h_
//$ class com.sun.tools.javac.processing.JavacFiler
//$ extends javax.annotation.processing.Filer
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/lang/Array.h>
#include <javax/annotation/processing/Filer.h>

#pragma push_macro("ALREADY_OPENED")
#undef ALREADY_OPENED
#pragma push_macro("NOT_FOR_READING")
#undef NOT_FOR_READING
#pragma push_macro("NOT_FOR_WRITING")
#undef NOT_FOR_WRITING

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$ModuleSymbol;
					class Symtab;
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
					class Modules;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace model {
					class JavacElements;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {
					class JavacFiler$Tuple3;
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
					class Log;
					class Names;
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
		class Set;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager;
		class JavaFileManager$Location;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class JavacFiler : public ::javax::annotation::processing::Filer, public ::java::io::Closeable {
	$class(JavacFiler, 0, ::javax::annotation::processing::Filer, ::java::io::Closeable)
public:
	JavacFiler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Context* context);
	void checkFileReopening(::javax::tools::FileObject* fileObject, bool forWriting);
	void checkName($String* name);
	void checkName($String* name, bool allowUnnamedPackageInfo);
	void checkNameAndExistence(::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod, $String* typename$, bool allowUnnamedPackageInfo);
	::com::sun::tools::javac::util::Pair* checkOrInferModule(::java::lang::CharSequence* moduleAndPkg);
	::com::sun::tools::javac::processing::JavacFiler$Tuple3* checkOrInferModule(::javax::tools::JavaFileManager$Location* location, ::java::lang::CharSequence* moduleAndPkg, bool write);
	void clearRoundState();
	virtual void close() override;
	void closeFileObject(::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod, $String* typeName, ::javax::tools::FileObject* fileObject);
	bool containedInInitialInputs($String* typename$);
	virtual ::javax::tools::JavaFileObject* createClassFile(::java::lang::CharSequence* nameAndModule, $Array<::javax::lang::model::element::Element>* originatingElements) override;
	virtual ::javax::tools::FileObject* createResource(::javax::tools::JavaFileManager$Location* location, ::java::lang::CharSequence* moduleAndPkg, ::java::lang::CharSequence* relativeName, $Array<::javax::lang::model::element::Element>* originatingElements) override;
	virtual ::javax::tools::JavaFileObject* createSourceFile(::java::lang::CharSequence* nameAndModule, $Array<::javax::lang::model::element::Element>* originatingElements) override;
	::javax::tools::JavaFileObject* createSourceOrClassFile(::com::sun::tools::javac::code::Symbol$ModuleSymbol* mod, bool isSourceFile, $String* name);
	virtual void displayState();
	virtual ::java::util::Map* getGeneratedClasses();
	virtual ::java::util::Set* getGeneratedSourceFileObjects();
	virtual ::java::util::Set* getGeneratedSourceNames();
	virtual ::javax::tools::FileObject* getResource(::javax::tools::JavaFileManager$Location* location, ::java::lang::CharSequence* moduleAndPkg, ::java::lang::CharSequence* relativeName) override;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* inferModule($String* pkg);
	bool isInFileObjectHistory(::javax::tools::FileObject* fileObject, bool forWriting);
	bool isPackageInfo($String* name, bool allowUnnamedPackageInfo);
	static ::java::util::Map* lambda$closeFileObject$0(::com::sun::tools::javac::code::Symbol$ModuleSymbol* m);
	void locationCheck(::javax::tools::JavaFileManager$Location* location);
	virtual bool newFiles();
	virtual void newRound();
	virtual void setInitialState(::java::util::Collection* initialInputs, ::java::util::Collection* initialClassNames);
	virtual void setLastRound(bool lastRound);
	virtual $String* toString() override;
	virtual void warnIfUnclosedFiles();
	static $String* ALREADY_OPENED;
	static $String* NOT_FOR_READING;
	static $String* NOT_FOR_WRITING;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::model::JavacElements* elementUtils = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::comp::Modules* modules = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::util::Context* context = nullptr;
	bool lastRound = false;
	bool lint = false;
	::java::util::Set* initialInputs = nullptr;
	::java::util::Set* fileObjectHistory = nullptr;
	::java::util::Set* openTypeNames = nullptr;
	::java::util::Set* generatedSourceNames = nullptr;
	::java::util::Map* generatedClasses = nullptr;
	::java::util::Set* generatedSourceFileObjects = nullptr;
	::java::util::Set* aggregateGeneratedSourceNames = nullptr;
	::java::util::Set* aggregateGeneratedClassNames = nullptr;
	::java::util::Set* initialClassNames = nullptr;
	$String* defaultTargetModule = nullptr;
};

				} // processing
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("ALREADY_OPENED")
#pragma pop_macro("NOT_FOR_READING")
#pragma pop_macro("NOT_FOR_WRITING")

#endif // _com_sun_tools_javac_processing_JavacFiler_h_