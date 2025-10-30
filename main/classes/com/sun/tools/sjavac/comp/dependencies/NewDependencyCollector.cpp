#include <com/sun/tools/sjavac/comp/dependencies/NewDependencyCollector.h>

#include <com/sun/source/util/TaskEvent$Kind.h>
#include <com/sun/source/util/TaskEvent.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies$Node.h>
#include <com/sun/tools/javac/util/Dependencies$GraphDependencies.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <com/sun/tools/javac/util/GraphUtils$DependencyKind.h>
#include <com/sun/tools/javac/util/GraphUtils$Node.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/comp/JavaFileObjectWithLocation.h>
#include <com/sun/tools/sjavac/comp/PubAPIs.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/Element.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS_PATH
#undef COMPILATION
#undef SOURCE_PATH

using $GraphUtils$DependencyKindArray = $Array<::com::sun::tools::javac::util::GraphUtils$DependencyKind>;
using $TaskEvent = ::com::sun::source::util::TaskEvent;
using $TaskEvent$Kind = ::com::sun::source::util::TaskEvent$Kind;
using $TaskListener = ::com::sun::source::util::TaskListener;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Context = ::com::sun::tools::javac::util::Context;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$GraphDependencies = ::com::sun::tools::javac::util::Dependencies$GraphDependencies;
using $Dependencies$GraphDependencies$CompletionNode = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$CompletionNode;
using $Dependencies$GraphDependencies$Node = ::com::sun::tools::javac::util::Dependencies$GraphDependencies$Node;
using $GraphUtils$DependencyKind = ::com::sun::tools::javac::util::GraphUtils$DependencyKind;
using $GraphUtils$Node = ::com::sun::tools::javac::util::GraphUtils$Node;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $Util = ::com::sun::tools::sjavac::Util;
using $JavaFileObjectWithLocation = ::com::sun::tools::sjavac::comp::JavaFileObjectWithLocation;
using $PubAPIs = ::com::sun::tools::sjavac::comp::PubAPIs;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $Element = ::javax::lang::model::element::Element;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {
					namespace dependencies {

class NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0 : public $Function {
	$class(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* n) override {
		 return $of(NewDependencyCollector::lambda$getDependencyNodes$0($cast($Dependencies$GraphDependencies$Node, n)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0::*)()>(&NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.dependencies.NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0::load$($String* name, bool initialize) {
	$loadClass(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0::class$ = nullptr;

class NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1 : public $Predicate {
	$class(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* n) override {
		 return NewDependencyCollector::lambda$getDependencyNodes$1($cast($Dependencies$GraphDependencies$CompletionNode, n));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1::*)()>(&NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.dependencies.NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1::load$($String* name, bool initialize) {
	$loadClass(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1::class$ = nullptr;

class NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2 : public $Predicate {
	$class(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$(bool explicits, $Collection* explicitJFOs) {
		this->explicits = explicits;
		$set(this, explicitJFOs, explicitJFOs);
	}
	virtual bool test(Object$* n) override {
		 return NewDependencyCollector::lambda$getDependencyNodes$2(explicits, explicitJFOs, $cast($Dependencies$GraphDependencies$CompletionNode, n));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2>());
	}
	bool explicits = false;
	$Collection* explicitJFOs = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::fieldInfos[3] = {
	{"explicits", "Z", nullptr, $PUBLIC, $field(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2, explicits)},
	{"explicitJFOs", "Ljava/util/Collection;", nullptr, $PUBLIC, $field(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2, explicitJFOs)},
	{}
};
$MethodInfo NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::methodInfos[3] = {
	{"<init>", "(ZLjava/util/Collection;)V", nullptr, $PUBLIC, $method(static_cast<void(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::*)(bool,$Collection*)>(&NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.dependencies.NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::load$($String* name, bool initialize) {
	$loadClass(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::class$ = nullptr;

class NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3 : public $Function {
	$class(NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3, $NO_CLASS_INIT, $Function)
public:
	void init$($Dependencies$GraphDependencies$CompletionNode* cnode) {
		$set(this, cnode, cnode);
	}
	virtual $Object* apply(Object$* dk) override {
		 return $of(NewDependencyCollector::lambda$getAllDependencies$3(cnode, $cast($GraphUtils$DependencyKind, dk)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3>());
	}
	$Dependencies$GraphDependencies$CompletionNode* cnode = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::fieldInfos[2] = {
	{"cnode", "Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;", nullptr, $PUBLIC, $field(NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3, cnode)},
	{}
};
$MethodInfo NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;)V", nullptr, $PUBLIC, $method(static_cast<void(NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::*)($Dependencies$GraphDependencies$CompletionNode*)>(&NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.comp.dependencies.NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::load$($String* name, bool initialize) {
	$loadClass(NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::class$ = nullptr;

$FieldInfo _NewDependencyCollector_FieldInfo_[] = {
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PRIVATE | $FINAL, $field(NewDependencyCollector, context)},
	{"explicitJFOs", "Ljava/util/Collection;", "Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;", $PRIVATE | $FINAL, $field(NewDependencyCollector, explicitJFOs)},
	{"deps", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;", $PRIVATE, $field(NewDependencyCollector, deps)},
	{"cpDeps", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;", $PRIVATE, $field(NewDependencyCollector, cpDeps)},
	{}
};

$MethodInfo _NewDependencyCollector_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection;)V", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;)V", $PUBLIC, $method(static_cast<void(NewDependencyCollector::*)($Context*,$Collection*)>(&NewDependencyCollector::init$))},
	{"allSupertypes", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/util/Set;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Ljava/util/Set<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;>;", $PRIVATE, $method(static_cast<$Set*(NewDependencyCollector::*)($Symbol$TypeSymbol*)>(&NewDependencyCollector::allSupertypes))},
	{"collectPubApisOfDependencies", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection;)V", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;)V", $PRIVATE, $method(static_cast<void(NewDependencyCollector::*)($Context*,$Collection*)>(&NewDependencyCollector::collectPubApisOfDependencies))},
	{"finished", "(Lcom/sun/source/util/TaskEvent;)V", nullptr, $PUBLIC},
	{"getAllDependencies", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;)Ljava/util/Collection;", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;)Ljava/util/Collection<+Lcom/sun/tools/javac/util/GraphUtils$Node<**>;>;", $PRIVATE, $method(static_cast<$Collection*(NewDependencyCollector::*)($Dependencies$GraphDependencies$CompletionNode*)>(&NewDependencyCollector::getAllDependencies))},
	{"getDependencies", "(Z)Ljava/util/Map;", "(Z)Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;", $PUBLIC},
	{"getDependencies", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection;Z)Ljava/util/Map;", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;Z)Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;>;", $PRIVATE, $method(static_cast<$Map*(NewDependencyCollector::*)($Context*,$Collection*,bool)>(&NewDependencyCollector::getDependencies))},
	{"getDependencyNodes", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection;Z)Ljava/util/Set;", "(Lcom/sun/tools/javac/util/Context;Ljava/util/Collection<Ljavax/tools/JavaFileObject;>;Z)Ljava/util/Set<Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;>;", $PRIVATE, $method(static_cast<$Set*(NewDependencyCollector::*)($Context*,$Collection*,bool)>(&NewDependencyCollector::getDependencyNodes))},
	{"getLocationOf", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljavax/tools/JavaFileManager$Location;", nullptr, $PRIVATE, $method(static_cast<$JavaFileManager$Location*(NewDependencyCollector::*)($Symbol$ClassSymbol*)>(&NewDependencyCollector::getLocationOf))},
	{"isSymbolRelevant", "(ZLcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PUBLIC},
	{"lambda$getAllDependencies$3", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;Lcom/sun/tools/javac/util/GraphUtils$DependencyKind;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($Dependencies$GraphDependencies$CompletionNode*,$GraphUtils$DependencyKind*)>(&NewDependencyCollector::lambda$getAllDependencies$3))},
	{"lambda$getDependencyNodes$0", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$Node;)Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Dependencies$GraphDependencies$CompletionNode*(*)($Dependencies$GraphDependencies$Node*)>(&NewDependencyCollector::lambda$getDependencyNodes$0))},
	{"lambda$getDependencyNodes$1", "(Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Dependencies$GraphDependencies$CompletionNode*)>(&NewDependencyCollector::lambda$getDependencyNodes$1))},
	{"lambda$getDependencyNodes$2", "(ZLjava/util/Collection;Lcom/sun/tools/javac/util/Dependencies$GraphDependencies$CompletionNode;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(bool,$Collection*,$Dependencies$GraphDependencies$CompletionNode*)>(&NewDependencyCollector::lambda$getDependencyNodes$2))},
	{}
};

$ClassInfo _NewDependencyCollector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.comp.dependencies.NewDependencyCollector",
	"java.lang.Object",
	"com.sun.source.util.TaskListener",
	_NewDependencyCollector_FieldInfo_,
	_NewDependencyCollector_MethodInfo_
};

$Object* allocate$NewDependencyCollector($Class* clazz) {
	return $of($alloc(NewDependencyCollector));
}

void NewDependencyCollector::init$($Context* context, $Collection* explicitJFOs) {
	$set(this, context, context);
	$set(this, explicitJFOs, explicitJFOs);
}

void NewDependencyCollector::finished($TaskEvent* e) {
	$init($TaskEvent$Kind);
	if ($nc(e)->getKind() == $TaskEvent$Kind::COMPILATION) {
		collectPubApisOfDependencies(this->context, this->explicitJFOs);
		$set(this, deps, getDependencies(this->context, this->explicitJFOs, false));
		$set(this, cpDeps, getDependencies(this->context, this->explicitJFOs, true));
	}
}

$Map* NewDependencyCollector::getDependencies(bool cp) {
	return cp ? this->cpDeps : this->deps;
}

$Set* NewDependencyCollector::getDependencyNodes($Context* context, $Collection* explicitJFOs, bool explicits) {
	$useLocalCurrentObjectStackCache();
	$var($Dependencies$GraphDependencies, deps, $cast($Dependencies$GraphDependencies, $Dependencies$GraphDependencies::instance(context)));
	return $cast($Set, $nc($($nc($($nc($($nc($($nc($($nc(deps)->getNodes()))->stream()))->map(static_cast<$Function*>($$new(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0)))))->filter(static_cast<$Predicate*>($$new(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1)))))->filter(static_cast<$Predicate*>($$new(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2, explicits, explicitJFOs)))))->collect($($Collectors::toSet())));
}

void NewDependencyCollector::collectPubApisOfDependencies($Context* context, $Collection* explicitJFOs) {
	$useLocalCurrentObjectStackCache();
	$var($PubAPIs, pubApis, $PubAPIs::instance(context));
	{
		$var($Iterator, i$, $nc($(getDependencyNodes(context, explicitJFOs, false)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Dependencies$GraphDependencies$CompletionNode, cDepNode, $cast($Dependencies$GraphDependencies$CompletionNode, i$->next()));
			{
				$var($Symbol$ClassSymbol, cs, $nc($($nc(cDepNode)->getClassSymbol()))->outermostClass());
				$var($JavaFileManager$Location, loc, getLocationOf(cs));
				$init($StandardLocation);
				if ($equals(loc, $StandardLocation::CLASS_PATH) || $equals(loc, $StandardLocation::SOURCE_PATH)) {
					$nc(pubApis)->visitPubapi(static_cast<$Element*>(static_cast<$Symbol*>(static_cast<$Symbol$TypeSymbol*>(cs))));
				}
			}
		}
	}
}

$JavaFileManager$Location* NewDependencyCollector::getLocationOf($Symbol$ClassSymbol* cs) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, jfo, $nc($($nc(cs)->outermostClass()))->classfile);
	{
		$var($JavaFileObjectWithLocation, javaFileObjectWithLocation, nullptr);
		bool var$0 = $instanceOf($JavaFileObjectWithLocation, jfo);
		if (var$0) {
			$assign(javaFileObjectWithLocation, $cast($JavaFileObjectWithLocation, jfo));
			var$0 = true;
		}
		if (var$0) {
			return $nc(javaFileObjectWithLocation)->getLocation();
		}
	}
	return nullptr;
}

$Map* NewDependencyCollector::getDependencies($Context* context, $Collection* explicitJFOs, bool cp) {
	$useLocalCurrentObjectStackCache();
	$var($Map, result, $new($HashMap));
	{
		$var($Iterator, i$, $nc($(getDependencyNodes(context, explicitJFOs, true)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Dependencies$GraphDependencies$CompletionNode, cnode, $cast($Dependencies$GraphDependencies$CompletionNode, i$->next()));
			{
				$var($String, fqDep, $nc($nc($($nc($($nc(cnode)->getClassSymbol()))->outermostClass()))->flatname)->toString());
				$var($String, depPkg, $Util::pkgNameOfClassName(fqDep));
				$var($Map, depsForThisClass, $cast($Map, result->get(depPkg)));
				if (depsForThisClass == nullptr) {
					result->put(depPkg, $assign(depsForThisClass, $new($HashMap)));
				}
				$var($Set, fqDeps, $cast($Set, $nc(depsForThisClass)->get(fqDep)));
				if (fqDeps == nullptr) {
					depsForThisClass->put(fqDep, $assign(fqDeps, $new($HashSet)));
				}
				{
					$var($Iterator, i$, $nc($(getAllDependencies(cnode)))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($GraphUtils$Node, depNode, $cast($GraphUtils$Node, i$->next()));
						{
							$var($Dependencies$GraphDependencies$CompletionNode, cDepNode, $cast($Dependencies$GraphDependencies$CompletionNode, depNode));
							if (cDepNode == cnode) {
								continue;
							}
							if ($nc($($nc(cDepNode)->getClassSymbol()))->fullname == nullptr) {
								continue;
							}
							if (isSymbolRelevant(cp, $($nc(cDepNode)->getClassSymbol()))) {
								$nc(fqDeps)->add($($nc($nc($($nc($($nc(cDepNode)->getClassSymbol()))->outermostClass()))->flatname)->toString()));
							}
						}
					}
				}
				{
					$var($Iterator, i$, $nc($(allSupertypes($(cnode->getClassSymbol()))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol$ClassSymbol, cs, $cast($Symbol$ClassSymbol, i$->next()));
						{
							if (isSymbolRelevant(cp, cs)) {
								$nc(fqDeps)->add($($nc($nc($($nc(cs)->outermostClass()))->flatname)->toString()));
							}
						}
					}
				}
			}
		}
	}
	return result;
}

bool NewDependencyCollector::isSymbolRelevant(bool cp, $Symbol$ClassSymbol* cs) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileManager$Location, csLoc, getLocationOf(cs));
	$init($StandardLocation);
	$var($JavaFileManager$Location, relevantLocation, cp ? static_cast<$JavaFileManager$Location*>($StandardLocation::CLASS_PATH) : static_cast<$JavaFileManager$Location*>($StandardLocation::SOURCE_PATH));
	return csLoc == relevantLocation;
}

$Set* NewDependencyCollector::allSupertypes($Symbol$TypeSymbol* t) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, classSymbol, nullptr);
	bool var$0 = t == nullptr;
	if (!var$0) {
		bool var$1 = $instanceOf($Symbol$ClassSymbol, t);
		if (var$1) {
			$assign(classSymbol, $cast($Symbol$ClassSymbol, t));
			var$1 = true;
		}
		var$0 = !(var$1);
	}
	if (var$0) {
		return $Collections::emptySet();
	}
	$var($Set, result, $new($HashSet));
	result->add(classSymbol);
	result->addAll($(allSupertypes($nc($($nc(classSymbol)->getSuperclass()))->tsym)));
	{
		$var($Iterator, i$, $nc($($nc(classSymbol)->getInterfaces()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Type, it, $cast($Type, i$->next()));
			{
				result->addAll($(allSupertypes($nc(it)->tsym)));
			}
		}
	}
	return result;
}

$Collection* NewDependencyCollector::getAllDependencies($Dependencies$GraphDependencies$CompletionNode* cnode) {
	$useLocalCurrentObjectStackCache();
	return $cast($Collection, $nc($($nc($($Stream::of($($nc(cnode)->getSupportedDependencyKinds()))))->flatMap(static_cast<$Function*>($$new(NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3, cnode)))))->collect($($Collectors::toSet())));
}

$Stream* NewDependencyCollector::lambda$getAllDependencies$3($Dependencies$GraphDependencies$CompletionNode* cnode, $GraphUtils$DependencyKind* dk) {
	$init(NewDependencyCollector);
	return $nc($($nc(cnode)->getDependenciesByKind(dk)))->stream();
}

bool NewDependencyCollector::lambda$getDependencyNodes$2(bool explicits, $Collection* explicitJFOs, $Dependencies$GraphDependencies$CompletionNode* n) {
	$init(NewDependencyCollector);
	return explicits == $nc(explicitJFOs)->contains($nc($($nc(n)->getClassSymbol()))->classfile);
}

bool NewDependencyCollector::lambda$getDependencyNodes$1($Dependencies$GraphDependencies$CompletionNode* n) {
	$init(NewDependencyCollector);
	return $nc($($nc(n)->getClassSymbol()))->fullname != nullptr;
}

$Dependencies$GraphDependencies$CompletionNode* NewDependencyCollector::lambda$getDependencyNodes$0($Dependencies$GraphDependencies$Node* n) {
	$init(NewDependencyCollector);
	return $cast($Dependencies$GraphDependencies$CompletionNode, n);
}

NewDependencyCollector::NewDependencyCollector() {
}

$Class* NewDependencyCollector::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0::classInfo$.name)) {
			return NewDependencyCollector$$Lambda$lambda$getDependencyNodes$0::load$(name, initialize);
		}
		if (name->equals(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1::classInfo$.name)) {
			return NewDependencyCollector$$Lambda$lambda$getDependencyNodes$1$1::load$(name, initialize);
		}
		if (name->equals(NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::classInfo$.name)) {
			return NewDependencyCollector$$Lambda$lambda$getDependencyNodes$2$2::load$(name, initialize);
		}
		if (name->equals(NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::classInfo$.name)) {
			return NewDependencyCollector$$Lambda$lambda$getAllDependencies$3$3::load$(name, initialize);
		}
	}
	$loadClass(NewDependencyCollector, name, initialize, &_NewDependencyCollector_ClassInfo_, allocate$NewDependencyCollector);
	return class$;
}

$Class* NewDependencyCollector::class$ = nullptr;

					} // dependencies
				} // comp
			} // sjavac
		} // tools
	} // sun
} // com