#include <com/sun/tools/sjavac/BuildState.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Module.h>
#include <com/sun/tools/sjavac/Package.h>
#include <com/sun/tools/sjavac/Source.h>
#include <com/sun/tools/sjavac/Util.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Assert = ::com::sun::tools::javac::util::Assert;
using $Log = ::com::sun::tools::sjavac::Log;
using $Module = ::com::sun::tools::sjavac::Module;
using $Package = ::com::sun::tools::sjavac::Package;
using $Source = ::com::sun::tools::sjavac::Source;
using $Util = ::com::sun::tools::sjavac::Util;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $BiFunction = ::java::util::function::BiFunction;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class BuildState$$Lambda$union : public $BinaryOperator {
	$class(BuildState$$Lambda$union, $NO_CLASS_INIT, $BinaryOperator)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s1, Object$* s2) override {
		 return $of($Util::union$($cast($Set, s1), $cast($Set, s2)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BuildState$$Lambda$union>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo BuildState$$Lambda$union::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BuildState$$Lambda$union::*)()>(&BuildState$$Lambda$union::init$))},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BuildState$$Lambda$union::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.BuildState$$Lambda$union",
	"java.lang.Object",
	"java.util.function.BinaryOperator",
	nullptr,
	methodInfos
};
$Class* BuildState$$Lambda$union::load$($String* name, bool initialize) {
	$loadClass(BuildState$$Lambda$union, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BuildState$$Lambda$union::class$ = nullptr;

$FieldInfo _BuildState_FieldInfo_[] = {
	{"modules", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Module;>;", $PRIVATE, $field(BuildState, modules$)},
	{"packages", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Package;>;", $PRIVATE, $field(BuildState, packages$)},
	{"sources", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $field(BuildState, sources$)},
	{"artifacts", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/io/File;>;", $PRIVATE, $field(BuildState, artifacts$)},
	{"dependents", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE, $field(BuildState, dependents$)},
	{}
};

$MethodInfo _BuildState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BuildState::*)()>(&BuildState::init$))},
	{"artifacts", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/io/File;>;", $PUBLIC},
	{"calculateDependents", "()V", nullptr, $PUBLIC},
	{"checkInternalState", "(Ljava/lang/String;ZLjava/util/Map;)V", "(Ljava/lang/String;ZLjava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;)V", $PUBLIC},
	{"copyPackagesExcept", "(Lcom/sun/tools/sjavac/BuildState;Ljava/util/Set;Ljava/util/Set;)V", "(Lcom/sun/tools/sjavac/BuildState;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC},
	{"dependents", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PUBLIC},
	{"findModuleFromPackageName", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/Module;", nullptr, 0},
	{"flattenArtifacts", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Module;>;)V", $PUBLIC},
	{"flattenPackagesSourcesAndArtifacts", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Module;>;)V", $PUBLIC},
	{"loadModule", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/Module;", nullptr, $PUBLIC},
	{"loadPackage", "(Lcom/sun/tools/sjavac/Module;Ljava/lang/String;)Lcom/sun/tools/sjavac/Package;", nullptr, $PUBLIC},
	{"loadSource", "(Lcom/sun/tools/sjavac/Package;Ljava/lang/String;Z)Lcom/sun/tools/sjavac/Source;", nullptr, $PUBLIC},
	{"lookupModule", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/Module;", nullptr, $PUBLIC},
	{"modules", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Module;>;", $PUBLIC},
	{"packages", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Package;>;", $PUBLIC},
	{"sources", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;", $PUBLIC},
	{}
};

$ClassInfo _BuildState_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.BuildState",
	"java.lang.Object",
	nullptr,
	_BuildState_FieldInfo_,
	_BuildState_MethodInfo_
};

$Object* allocate$BuildState($Class* clazz) {
	return $of($alloc(BuildState));
}

void BuildState::init$() {
	$set(this, modules$, $new($HashMap));
	$set(this, packages$, $new($HashMap));
	$set(this, sources$, $new($HashMap));
	$set(this, artifacts$, $new($HashMap));
	$set(this, dependents$, $new($HashMap));
}

$Map* BuildState::modules() {
	return this->modules$;
}

$Map* BuildState::packages() {
	return this->packages$;
}

$Map* BuildState::sources() {
	return this->sources$;
}

$Map* BuildState::artifacts() {
	return this->artifacts$;
}

$Map* BuildState::dependents() {
	return this->dependents$;
}

$Module* BuildState::lookupModule($String* mod) {
	$var($Module, m, $cast($Module, $nc(this->modules$)->get(mod)));
	if (m == nullptr) {
		$assign(m, $new($Module, mod, "???"_s));
		$nc(this->modules$)->put(mod, m);
	}
	return m;
}

$Module* BuildState::findModuleFromPackageName($String* pkg) {
	int32_t cp = $nc(pkg)->indexOf((int32_t)u':');
	$Assert::check(cp != -1, "Could not find package name"_s);
	$var($String, mod, pkg->substring(0, cp));
	return lookupModule(mod);
}

void BuildState::flattenPackagesSourcesAndArtifacts($Map* m) {
	$useLocalCurrentObjectStackCache();
	$set(this, modules$, m);
	{
		$var($Iterator, i$, $nc($($nc(this->modules$)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Module, i, $cast($Module, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc($($nc(i)->packages()))->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, j, $cast($Map$Entry, i$->next()));
						{
							$var($Package, p, $cast($Package, $nc(this->packages$)->get($($nc(j)->getKey()))));
							$Assert::check(p == nullptr || $equals(p, $nc(j)->getValue()));
							if (p == nullptr) {
								$assign(p, $cast($Package, $nc(j)->getValue()));
								$var($Object, var$0, $cast($String, j->getKey()));
								$nc(this->packages$)->put(var$0, $cast($Package, $(j->getValue())));
							}
							{
								$var($Iterator, i$, $nc($($nc($($nc(p)->sources()))->entrySet()))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Map$Entry, k, $cast($Map$Entry, i$->next()));
									{
										$var($Source, s, $cast($Source, $nc(this->sources$)->get($($nc(k)->getKey()))));
										$Assert::check(s == nullptr || $equals(s, $nc(k)->getValue()));
										if (s == nullptr) {
											$assign(s, $cast($Source, $nc(k)->getValue()));
											$var($Object, var$1, $cast($String, k->getKey()));
											$nc(this->sources$)->put(var$1, $cast($Source, $(k->getValue())));
										}
									}
								}
							}
							{
								$var($Iterator, i$, $nc($($nc($(p->artifacts()))->entrySet()))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Map$Entry, g, $cast($Map$Entry, i$->next()));
									{
										$var($File, f, $cast($File, $nc(this->artifacts$)->get($($nc(g)->getKey()))));
										$Assert::check(f == nullptr || $equals(f, $nc(g)->getValue()));
										if (f == nullptr) {
											$assign(f, $cast($File, $nc(g)->getValue()));
											$var($Object, var$2, $cast($String, g->getKey()));
											$nc(this->artifacts$)->put(var$2, $cast($File, $(g->getValue())));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void BuildState::flattenArtifacts($Map* m) {
	$useLocalCurrentObjectStackCache();
	$set(this, modules$, m);
	{
		$var($Iterator, i$, $nc($($nc(this->modules$)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Module, i, $cast($Module, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($nc($($nc(i)->packages()))->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, j, $cast($Map$Entry, i$->next()));
						{
							$var($Package, p, $cast($Package, $nc(this->packages$)->get($($nc(j)->getKey()))));
							$Assert::check(p == nullptr || $equals(p, $nc(j)->getValue()));
							$assign(p, $cast($Package, $nc(j)->getValue()));
							$var($Object, var$0, $cast($String, j->getKey()));
							$nc(this->packages$)->put(var$0, $cast($Package, $(j->getValue())));
							{
								$var($Iterator, i$, $nc($($nc($($nc(p)->artifacts()))->entrySet()))->iterator());
								for (; $nc(i$)->hasNext();) {
									$var($Map$Entry, g, $cast($Map$Entry, i$->next()));
									{
										$var($File, f, $cast($File, $nc(this->artifacts$)->get($($nc(g)->getKey()))));
										$Assert::check(f == nullptr || $equals(f, $nc(g)->getValue()));
										$var($Object, var$1, $cast($String, $nc(g)->getKey()));
										$nc(this->artifacts$)->put(var$1, $cast($File, $(g->getValue())));
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void BuildState::calculateDependents() {
	$useLocalCurrentObjectStackCache();
	$set(this, dependents$, $new($HashMap));
	{
		$var($Iterator, i$, $nc($($nc(this->packages$)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$var($Package, p, $cast($Package, $nc(this->packages$)->get(s)));
				$var($Object, var$0, $of($Collections::emptySet()));
				$var($Set, deps, $cast($Set, $nc($($nc($($nc($($nc(p)->typeDependencies()))->values()))->stream()))->reduce(var$0, static_cast<$BinaryOperator*>($$new(BuildState$$Lambda$union)))));
				{
					$var($Iterator, i$, $nc(deps)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, dep, $cast($String, i$->next()));
						{
							$var($String, depPkgStr, $str({":"_s, $($nc(dep)->substring(0, dep->lastIndexOf((int32_t)u'.')))}));
							$var($Object, var$1, $of(depPkgStr));
							$var($Object, var$2, $of($Collections::singleton(s)));
							$nc(this->dependents$)->merge(var$1, var$2, static_cast<$BiFunction*>($$new(BuildState$$Lambda$union)));
							$var($Package, dp, $cast($Package, $nc(this->packages$)->get(depPkgStr)));
							if (dp != nullptr) {
								dp->addDependent($(p->name()));
							}
						}
					}
				}
			}
		}
	}
}

void BuildState::checkInternalState($String* msg, bool linkedOnly, $Map* srcs) {
	$useLocalCurrentObjectStackCache();
	bool baad = false;
	$var($Map, original, $new($HashMap));
	$var($Map, calculated, $new($HashMap));
	{
		$var($Iterator, i$, $nc($($nc(this->sources$)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$var($Source, ss, $cast($Source, $nc(this->sources$)->get(s)));
				if ($nc(ss)->isLinkedOnly() == linkedOnly) {
					calculated->put(s, ss);
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(srcs)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$var($Source, ss, $cast($Source, srcs->get(s)));
				if ($nc(ss)->isLinkedOnly() == linkedOnly) {
					original->put(s, ss);
				}
			}
		}
	}
	int32_t var$0 = original->size();
	if (var$0 != calculated->size()) {
		$Log::error($$str({"INTERNAL ERROR "_s, msg, " original and calculated are not the same size!"_s}));
		baad = true;
	}
	if (!$nc($(original->keySet()))->equals($(calculated->keySet()))) {
		$Log::error($$str({"INTERNAL ERROR "_s, msg, " original and calculated do not have the same domain!"_s}));
		baad = true;
	}
	if (!baad) {
		{
			$var($Iterator, i$, $nc($(original->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, s, $cast($String, i$->next()));
				{
					$var($Source, s1, $cast($Source, original->get(s)));
					$var($Source, s2, $cast($Source, calculated->get(s)));
					if (s1 == nullptr || s2 == nullptr || !$nc(s1)->equals(s2)) {
						$Log::error($$str({"INTERNAL ERROR "_s, msg, " original and calculated have differing elements for "_s, s}));
					}
					baad = true;
				}
			}
		}
	}
	if (baad) {
		{
			$var($Iterator, i$, $nc($(original->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, s, $cast($String, i$->next()));
				{
					$var($Source, ss, $cast($Source, original->get(s)));
					$var($Source, sss, $cast($Source, calculated->get(s)));
					if (sss == nullptr) {
						$Log::error($$str({"The file "_s, s, " does not exist in calculated tree of sources."_s}));
					}
				}
			}
		}
		{
			$var($Iterator, i$, $nc($(calculated->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, s, $cast($String, i$->next()));
				{
					$var($Source, ss, $cast($Source, calculated->get(s)));
					$var($Source, sss, $cast($Source, original->get(s)));
					if (sss == nullptr) {
						$Log::error($$str({"The file "_s, s, " does not exist in original set of found sources."_s}));
					}
				}
			}
		}
	}
}

$Module* BuildState::loadModule($String* l) {
	$useLocalCurrentObjectStackCache();
	$var($Module, m, $Module::load(l));
	$nc(this->modules$)->put($($nc(m)->name()), m);
	return m;
}

$Package* BuildState::loadPackage($Module* lastModule, $String* l) {
	$useLocalCurrentObjectStackCache();
	$var($Package, p, $Package::load(lastModule, l));
	$nc(lastModule)->addPackage(p);
	$nc(this->packages$)->put($($nc(p)->name()), p);
	return p;
}

$Source* BuildState::loadSource($Package* lastPackage, $String* l, bool is_generated) {
	$useLocalCurrentObjectStackCache();
	$var($Source, s, $Source::load(lastPackage, l, is_generated));
	$nc(lastPackage)->addSource(s);
	$nc(this->sources$)->put($($nc(s)->name()), s);
	return s;
}

void BuildState::copyPackagesExcept(BuildState* prev, $Set* recompiled, $Set* removed) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc($($nc(prev)->packages()))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pkg, $cast($String, i$->next()));
			{
				bool var$0 = $nc(recompiled)->contains(pkg);
				if (var$0 || $nc(removed)->contains(pkg)) {
					continue;
				}
				$var($Module, mnew, findModuleFromPackageName(pkg));
				$var($Package, pprev, $cast($Package, $nc($(prev->packages()))->get(pkg)));
				if ($nc(this->packages$)->containsKey(pkg)) {
					$var($PubApi, var$1, pprev->getPubApi());
					$nc(pprev)->setPubapi($($PubApi::mergeTypes(var$1, $($nc(($cast($Package, $($nc(this->packages$)->get(pkg)))))->getPubApi()))));
				}
				$nc(mnew)->addPackage(pprev);
				$nc(this->packages$)->put(pkg, pprev);
			}
		}
	}
}

BuildState::BuildState() {
}

$Class* BuildState::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BuildState$$Lambda$union::classInfo$.name)) {
			return BuildState$$Lambda$union::load$(name, initialize);
		}
	}
	$loadClass(BuildState, name, initialize, &_BuildState_ClassInfo_, allocate$BuildState);
	return class$;
}

$Class* BuildState::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com