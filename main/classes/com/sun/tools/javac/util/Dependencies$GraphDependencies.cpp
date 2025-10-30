#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>

#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/main/JavaCompiler.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode$Kind.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$FilterVisitor.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$Node.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$PruneVisitor.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Options.h>
#include <java/io/FileWriter.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <java/util/Stack.h>
#include <jcpp.h>

#undef CLASS
#undef OTHER
#undef REDUNDANT
#undef SOURCE

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $JavaCompiler = ::com::sun::tools::javac::main::JavaCompiler;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $Dependencies$GraphDependencies$CompletionNode = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode;
using $Dependencies$GraphDependencies$CompletionNode$Kind = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode$Kind;
using $Dependencies$GraphDependencies$DependenciesMode = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$DependenciesMode;
using $Dependencies$GraphDependencies$FilterVisitor = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$FilterVisitor;
using $Dependencies$GraphDependencies$Node = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node;
using $Dependencies$GraphDependencies$PruneVisitor = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$PruneVisitor;
using $GraphUtils = ::com::sun::tools::javac::util::GraphUtils;
using $GraphUtils$AbstractNode = ::com::sun::tools::javac::util::GraphUtils$AbstractNode;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$NodeVisitor = ::com::sun::tools::javac::util::GraphUtils$NodeVisitor;
using $List = ::com::sun::tools::javac::util::List;
using $Options = ::com::sun::tools::javac::util::Options;
using $Closeable = ::java::io::Closeable;
using $FileWriter = ::java::io::FileWriter;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $HashMap = ::java::util::HashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $Map = ::java::util::Map;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class Dependencies$GraphDependencies$$Lambda$GraphDependencies : public $Context$Factory {
	$class(Dependencies$GraphDependencies$$Lambda$GraphDependencies, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$() {
	}
	virtual $Object* make($Context* context) override {
		 return $of($new(Dependencies$GraphDependencies, context));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Dependencies$GraphDependencies$$Lambda$GraphDependencies>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Dependencies$GraphDependencies$$Lambda$GraphDependencies::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Dependencies$GraphDependencies$$Lambda$GraphDependencies::*)()>(&Dependencies$GraphDependencies$$Lambda$GraphDependencies::init$))},
	{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Dependencies$GraphDependencies$$Lambda$GraphDependencies::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.util.Dependencies$GraphDependencies$$Lambda$GraphDependencies",
	"java.lang.Object",
	"com.sun.tools.javac.util.Context$Factory",
	nullptr,
	methodInfos
};
$Class* Dependencies$GraphDependencies$$Lambda$GraphDependencies::load$($String* name, bool initialize) {
	$loadClass(Dependencies$GraphDependencies$$Lambda$GraphDependencies, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Dependencies$GraphDependencies$$Lambda$GraphDependencies::class$ = nullptr;

$FieldInfo _Dependencies$GraphDependencies_FieldInfo_[] = {
	{"dependenciesModes", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$DependenciesMode;>;", $PRIVATE, $field(Dependencies$GraphDependencies, dependenciesModes)},
	{"dependenciesFile", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Dependencies$GraphDependencies, dependenciesFile)},
	{"nodeStack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;>;", 0, $field(Dependencies$GraphDependencies, nodeStack)},
	{"dependencyNodeMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;>;", 0, $field(Dependencies$GraphDependencies, dependencyNodeMap)},
	{}
};

$MethodInfo _Dependencies$GraphDependencies_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, 0, $method(static_cast<void(Dependencies$GraphDependencies::*)($Context*)>(&Dependencies$GraphDependencies::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, nullptr, "com.sun.tools.javac.code.Symbol$CompletionFailure"},
	{"getNodes", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;>;", $PUBLIC},
	{"isTerminal", "()Z", nullptr, $PUBLIC},
	{"pop", "()V", nullptr, $PUBLIC},
	{"preRegister", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Context*)>(&Dependencies$GraphDependencies::preRegister))},
	{"push", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;)V", nullptr, $PUBLIC},
	{"push", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;)Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Dependencies$GraphDependencies_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$FilterVisitor", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "FilterVisitor", $PRIVATE},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$PruneVisitor", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "PruneVisitor", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "CompletionNode", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$Node", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "Node", $PUBLIC | $STATIC | $ABSTRACT},
	{"com.sun.tools.javac.util.Dependencies$GraphDependencies$DependenciesMode", "com.sun.tools.javac.util.Dependencies$GraphDependencies", "DependenciesMode", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Dependencies$GraphDependencies_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Dependencies$GraphDependencies",
	"com.sun.tools.javac.util.Dependencies",
	"java.io.Closeable,com.sun.tools.javac.code.Symbol$Completer",
	_Dependencies$GraphDependencies_FieldInfo_,
	_Dependencies$GraphDependencies_MethodInfo_,
	nullptr,
	nullptr,
	_Dependencies$GraphDependencies_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.Dependencies"
};

$Object* allocate$Dependencies$GraphDependencies($Class* clazz) {
	return $of($alloc(Dependencies$GraphDependencies));
}

int32_t Dependencies$GraphDependencies::hashCode() {
	 return this->$Dependencies::hashCode();
}

bool Dependencies$GraphDependencies::equals(Object$* arg0) {
	 return this->$Dependencies::equals(arg0);
}

$Object* Dependencies$GraphDependencies::clone() {
	 return this->$Dependencies::clone();
}

$String* Dependencies$GraphDependencies::toString() {
	 return this->$Dependencies::toString();
}

void Dependencies$GraphDependencies::finalize() {
	this->$Dependencies::finalize();
}

void Dependencies$GraphDependencies::preRegister($Context* context) {
	$init(Dependencies$GraphDependencies);
	$init($Dependencies);
	$nc(context)->put($Dependencies::dependenciesKey, static_cast<$Context$Factory*>($$new(Dependencies$GraphDependencies$$Lambda$GraphDependencies)));
}

void Dependencies$GraphDependencies::init$($Context* context) {
	$useLocalCurrentObjectStackCache();
	$Dependencies::init$(context);
	$set(this, nodeStack, $new($Stack));
	$set(this, dependencyNodeMap, $new($LinkedHashMap));
	$var($Options, options, $Options::instance(context));
	$var($StringArray, modes, $nc($($nc(options)->get("debug.completionDeps"_s)))->split(","_s));
	{
		$var($StringArray, arr$, modes);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, mode, arr$->get(i$));
			{
				if ($nc(mode)->startsWith("file="_s)) {
					$set(this, dependenciesFile, mode->substring(5));
				}
			}
		}
	}
	$set(this, dependenciesModes, $Dependencies$GraphDependencies$DependenciesMode::getDependenciesModes(modes));
	$var($JavaCompiler, compiler, $JavaCompiler::instance(context));
	$set($nc(compiler), closeables, $nc(compiler->closeables)->prepend(this));
}

void Dependencies$GraphDependencies::push($Symbol$ClassSymbol* s, $Dependencies$CompletionCause* phase) {
	$var($Dependencies$GraphDependencies$Node, n, $new($Dependencies$GraphDependencies$CompletionNode, s));
	if (n == push(n, phase)) {
		$set($nc(s), completer, this);
	}
}

$Dependencies$GraphDependencies$Node* Dependencies$GraphDependencies::push($Dependencies$GraphDependencies$Node* newNode$renamed, $Dependencies$CompletionCause* cc) {
	$useLocalCurrentObjectStackCache();
	$var($Dependencies$GraphDependencies$Node, newNode, newNode$renamed);
	$var($Dependencies$GraphDependencies$Node, cachedNode, $cast($Dependencies$GraphDependencies$Node, $nc(this->dependencyNodeMap)->get($nc(newNode)->data)));
	if (cachedNode == nullptr) {
		$nc(this->dependencyNodeMap)->put($cast($Symbol$ClassSymbol, $nc(newNode)->data), newNode);
	} else {
		$assign(newNode, cachedNode);
	}
	if (!$nc(this->nodeStack)->isEmpty()) {
		$var($Dependencies$GraphDependencies$Node, currentNode, $cast($Dependencies$GraphDependencies$Node, $nc(this->nodeStack)->peek()));
		$nc(currentNode)->addDependency(cc, newNode);
	}
	$nc(this->nodeStack)->push(newNode);
	return newNode;
}

void Dependencies$GraphDependencies::pop() {
	$nc(this->nodeStack)->pop();
}

void Dependencies$GraphDependencies::close() {
	$useLocalCurrentObjectStackCache();
	$init($Dependencies$GraphDependencies$DependenciesMode);
	if (!$nc(this->dependenciesModes)->contains($Dependencies$GraphDependencies$DependenciesMode::REDUNDANT)) {
		$$new($Dependencies$GraphDependencies$PruneVisitor)->visit($($nc(this->dependencyNodeMap)->values()), nullptr);
	}
	if (!$nc(this->dependenciesModes)->contains($Dependencies$GraphDependencies$DependenciesMode::CLASS)) {
		$init($Dependencies$GraphDependencies$CompletionNode$Kind);
		$$new($Dependencies$GraphDependencies$FilterVisitor, this, $Dependencies$GraphDependencies$CompletionNode$Kind::SOURCE)->visit($($nc(this->dependencyNodeMap)->values()), nullptr);
	}
	if (!$nc(this->dependenciesModes)->contains($Dependencies$GraphDependencies$DependenciesMode::SOURCE)) {
		$init($Dependencies$GraphDependencies$CompletionNode$Kind);
		$$new($Dependencies$GraphDependencies$FilterVisitor, this, $Dependencies$GraphDependencies$CompletionNode$Kind::CLASS)->visit($($nc(this->dependencyNodeMap)->values()), nullptr);
	}
	if (this->dependenciesFile != nullptr) {
		{
			$var($FileWriter, fw, $new($FileWriter, this->dependenciesFile));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						fw->append($(static_cast<$CharSequence*>($GraphUtils::toDot($($nc(this->dependencyNodeMap)->values()), "CompletionDeps"_s, ""_s))));
					} catch ($Throwable& t$) {
						try {
							fw->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					fw->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void Dependencies$GraphDependencies::complete($Symbol* sym) {
	$init($Dependencies$CompletionCause);
	push($cast($Symbol$ClassSymbol, sym), $Dependencies$CompletionCause::OTHER);
	pop();
	$set($nc(sym), completer, this);
}

bool Dependencies$GraphDependencies::isTerminal() {
	return true;
}

$Collection* Dependencies$GraphDependencies::getNodes() {
	return $nc(this->dependencyNodeMap)->values();
}

Dependencies$GraphDependencies::Dependencies$GraphDependencies() {
}

$Class* Dependencies$GraphDependencies::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Dependencies$GraphDependencies$$Lambda$GraphDependencies::classInfo$.name)) {
			return Dependencies$GraphDependencies$$Lambda$GraphDependencies::load$(name, initialize);
		}
	}
	$loadClass(Dependencies$GraphDependencies, name, initialize, &_Dependencies$GraphDependencies_ClassInfo_, allocate$Dependencies$GraphDependencies);
	return class$;
}

$Class* Dependencies$GraphDependencies::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com