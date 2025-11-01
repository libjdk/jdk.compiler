#ifndef _com_sun_tools_javac_util_Dependencies$GraphDependencies_h_
#define _com_sun_tools_javac_util_Dependencies$GraphDependencies_h_
//$ class com.sun.tools.javac.util.Dependencies$GraphDependencies
//$ extends com.sun.tools.javac.util.Dependencies
//$ implements java.io.Closeable,com.sun.tools.javac.code.Symbol$Completer

#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <java/io/Closeable.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol;
					class Symbol$ClassSymbol;
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
					class Dependencies$CompletionCause;
					class Dependencies$GraphDependencies$Node;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class EnumSet;
		class Map;
		class Stack;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import Dependencies$GraphDependencies : public ::com::sun::tools::javac::util::Dependencies, public ::java::io::Closeable, public ::com::sun::tools::javac::code::Symbol$Completer {
	$class(Dependencies$GraphDependencies, $NO_CLASS_INIT, ::com::sun::tools::javac::util::Dependencies, ::java::io::Closeable, ::com::sun::tools::javac::code::Symbol$Completer)
public:
	Dependencies$GraphDependencies();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void close() override;
	virtual void complete(::com::sun::tools::javac::code::Symbol* sym) override;
	virtual ::java::util::Collection* getNodes();
	virtual bool isTerminal() override;
	virtual void pop() override;
	static void preRegister(::com::sun::tools::javac::util::Context* context);
	virtual void push(::com::sun::tools::javac::code::Symbol$ClassSymbol* s, ::com::sun::tools::javac::util::Dependencies$CompletionCause* phase) override;
	virtual ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* push(::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node* newNode, ::com::sun::tools::javac::util::Dependencies$CompletionCause* cc);
	virtual $String* toString() override;
	::java::util::EnumSet* dependenciesModes = nullptr;
	$String* dependenciesFile = nullptr;
	::java::util::Stack* nodeStack = nullptr;
	::java::util::Map* dependencyNodeMap = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_Dependencies$GraphDependencies_h_