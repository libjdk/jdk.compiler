#include <com/sun/tools/sjavac/Package.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Module.h>
#include <com/sun/tools/sjavac/Source.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef DEP_PATTERN

using $Assert = ::com::sun::tools::javac::util::Assert;
using $Log = ::com::sun::tools::sjavac::Log;
using $Module = ::com::sun::tools::sjavac::Module;
using $Source = ::com::sun::tools::sjavac::Source;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $TreeMap = ::java::util::TreeMap;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

class Package$$Lambda$lambda$savePubapi$0 : public $Function {
	$class(Package$$Lambda$lambda$savePubapi$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* l) override {
		 return $of(Package::lambda$savePubapi$0($cast($String, l)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Package$$Lambda$lambda$savePubapi$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Package$$Lambda$lambda$savePubapi$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Package$$Lambda$lambda$savePubapi$0::*)()>(&Package$$Lambda$lambda$savePubapi$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Package$$Lambda$lambda$savePubapi$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.Package$$Lambda$lambda$savePubapi$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Package$$Lambda$lambda$savePubapi$0::load$($String* name, bool initialize) {
	$loadClass(Package$$Lambda$lambda$savePubapi$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Package$$Lambda$lambda$savePubapi$0::class$ = nullptr;

class Package$$Lambda$append$1 : public $Consumer {
	$class(Package$$Lambda$append$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($StringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->append($cast($String, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Package$$Lambda$append$1>());
	}
	$StringBuilder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Package$$Lambda$append$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Package$$Lambda$append$1, inst$)},
	{}
};
$MethodInfo Package$$Lambda$append$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(Package$$Lambda$append$1::*)($StringBuilder*)>(&Package$$Lambda$append$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Package$$Lambda$append$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.sjavac.Package$$Lambda$append$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Package$$Lambda$append$1::load$($String* name, bool initialize) {
	$loadClass(Package$$Lambda$append$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Package$$Lambda$append$1::class$ = nullptr;

$FieldInfo _Package_FieldInfo_[] = {
	{"mod", "Lcom/sun/tools/sjavac/Module;", nullptr, $PRIVATE, $field(Package, mod$)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Package, name$)},
	{"dirname", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Package, dirname$)},
	{"dependents", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(Package, dependents$)},
	{"dependencies", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE, $field(Package, dependencies)},
	{"cpDependencies", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PRIVATE, $field(Package, cpDependencies)},
	{"pubApi", "Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PRIVATE, $field(Package, pubApi)},
	{"sources", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $field(Package, sources$)},
	{"artifacts", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/io/File;>;", $PRIVATE, $field(Package, artifacts$)},
	{"DEP_PATTERN", "Ljava/util/regex/Pattern;", nullptr, $PRIVATE | $STATIC, $staticField(Package, DEP_PATTERN)},
	{}
};

$MethodInfo _Package_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/Module;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Package::*)($Module*,$String*)>(&Package::init$))},
	{"addArtifact", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addArtifact", "(Ljava/io/File;)V", nullptr, $PUBLIC},
	{"addArtifacts", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/net/URI;>;)V", $PUBLIC},
	{"addDependency", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"addDependent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addSource", "(Lcom/sun/tools/sjavac/Source;)V", nullptr, $PUBLIC},
	{"artifacts", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/io/File;>;", $PUBLIC},
	{"compareTo", "(Lcom/sun/tools/sjavac/Package;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"deleteArtifacts", "()V", nullptr, $PUBLIC},
	{"dependents", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"dirname", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"existsInJavacState", "()Z", nullptr, $PUBLIC},
	{"getPubApi", "()Lcom/sun/tools/sjavac/pubapi/PubApi;", nullptr, $PUBLIC},
	{"hasPubApiChanged", "(Lcom/sun/tools/sjavac/pubapi/PubApi;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"lambda$savePubapi$0", "(Ljava/lang/String;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Stream*(*)($String*)>(&Package::lambda$savePubapi$0))},
	{"load", "(Lcom/sun/tools/sjavac/Module;Ljava/lang/String;)Lcom/sun/tools/sjavac/Package;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Package*(*)($Module*,$String*)>(&Package::load))},
	{"loadArtifact", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"mod", "()Lcom/sun/tools/sjavac/Module;", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"parseAndAddDependency", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"save", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC},
	{"saveArtifacts", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC},
	{"saveDependencies", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC},
	{"savePackages", "(Ljava/util/Map;Ljava/lang/StringBuilder;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Package;>;Ljava/lang/StringBuilder;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Map*,$StringBuilder*)>(&Package::savePackages))},
	{"savePubapi", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC},
	{"setArtifacts", "(Ljava/util/Set;)V", "(Ljava/util/Set<Ljava/net/URI;>;)V", $PUBLIC},
	{"setDependencies", "(Ljava/util/Map;Z)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;Z)V", $PUBLIC},
	{"setPubapi", "(Lcom/sun/tools/sjavac/pubapi/PubApi;)V", nullptr, $PUBLIC},
	{"sources", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;", $PUBLIC},
	{"typeClasspathDependencies", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PUBLIC},
	{"typeDependencies", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;", $PUBLIC},
	{}
};

$ClassInfo _Package_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.Package",
	"java.lang.Object",
	"java.lang.Comparable",
	_Package_FieldInfo_,
	_Package_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/tools/sjavac/Package;>;"
};

$Object* allocate$Package($Class* clazz) {
	return $of($alloc(Package));
}

$Pattern* Package::DEP_PATTERN = nullptr;

void Package::init$($Module* m, $String* n) {
	$useLocalCurrentObjectStackCache();
	$set(this, dependents$, $new($HashSet));
	$set(this, dependencies, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	$set(this, cpDependencies, static_cast<$Map*>(static_cast<$AbstractMap*>($new($TreeMap))));
	$set(this, pubApi, $new($PubApi));
	$set(this, sources$, $new($HashMap));
	$set(this, artifacts$, $new($HashMap));
	int32_t c = $nc(n)->indexOf(":"_s);
	$Assert::check(c != -1);
	$Assert::check($nc($($nc(m)->name()))->equals($(m->name())));
	$set(this, name$, n);
	$init($File);
	$set(this, dirname$, n->replace(u'.', $File::separatorChar));
	if ($nc($($nc(m)->name()))->length() > 0) {
		$set(this, dirname$, $str({$(m->dirname()), $$str($File::separatorChar), this->dirname$}));
	}
}

$Module* Package::mod() {
	return this->mod$;
}

$String* Package::name() {
	return this->name$;
}

$String* Package::dirname() {
	return this->dirname$;
}

$Map* Package::sources() {
	return this->sources$;
}

$Map* Package::artifacts() {
	return this->artifacts$;
}

$PubApi* Package::getPubApi() {
	return this->pubApi;
}

$Map* Package::typeDependencies() {
	return this->dependencies;
}

$Map* Package::typeClasspathDependencies() {
	return this->cpDependencies;
}

$Set* Package::dependents() {
	return this->dependents$;
}

bool Package::equals(Object$* o) {
	$var(Package, pac, nullptr);
	bool var$1 = $instanceOf(Package, o);
	if (var$1) {
		$assign(pac, $cast(Package, o));
		var$1 = true;
	}
	bool var$0 = (var$1);
	return var$0 && $nc(this->name$)->equals($nc(pac)->name$);
}

int32_t Package::hashCode() {
	return $nc(this->name$)->hashCode();
}

int32_t Package::compareTo(Package* o) {
	return $nc(this->name$)->compareTo($nc(o)->name$);
}

void Package::addSource($Source* s) {
	$useLocalCurrentObjectStackCache();
	$nc(this->sources$)->put($($nc($($nc(s)->file()))->getPath()), s);
}

void Package::parseAndAddDependency($String* d, bool cp) {
	$useLocalCurrentObjectStackCache();
	$var($Matcher, m, $nc(Package::DEP_PATTERN)->matcher(d));
	if (!$nc(m)->matches()) {
		$throwNew($IllegalArgumentException, $$str({"Bad dependency string: "_s, d}));
	}
	$var($String, var$0, $nc(m)->group(1));
	addDependency(var$0, $(m->group(2)), cp);
}

void Package::addDependency($String* fullyQualifiedFrom, $String* fullyQualifiedTo, bool cp) {
	$useLocalCurrentObjectStackCache();
	$var($Map, map, cp ? this->cpDependencies : this->dependencies);
	if (!$nc(map)->containsKey(fullyQualifiedFrom)) {
		map->put(fullyQualifiedFrom, $$new($HashSet));
	}
	$nc(($cast($Set, $($nc(map)->get(fullyQualifiedFrom)))))->add(fullyQualifiedTo);
}

void Package::addDependent($String* d) {
	$nc(this->dependents$)->add(d);
}

bool Package::existsInJavacState() {
	bool var$0 = $nc(this->artifacts$)->size() > 0;
	return var$0 || !$nc(this->pubApi)->isEmpty();
}

bool Package::hasPubApiChanged($PubApi* newPubApi) {
	return !$nc(newPubApi)->isBackwardCompatibleWith(this->pubApi);
}

void Package::setPubapi($PubApi* newPubApi) {
	$set(this, pubApi, newPubApi);
}

void Package::setDependencies($Map* ds, bool cp) {
	$useLocalCurrentObjectStackCache();
	$nc((cp ? this->cpDependencies : this->dependencies))->clear();
	{
		$var($Iterator, i$, $nc($($nc(ds)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, fullyQualifiedFrom, $cast($String, i$->next()));
			{
				$var($Iterator, i$, $nc(($cast($Set, $(ds->get(fullyQualifiedFrom)))))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, fullyQualifiedTo, $cast($String, i$->next()));
					addDependency(fullyQualifiedFrom, fullyQualifiedTo, cp);
				}
			}
		}
	}
}

void Package::save($StringBuilder* b) {
	$nc(b)->append("P "_s)->append(this->name$)->append("\n"_s);
	$Source::saveSources(this->sources$, b);
	saveDependencies(b);
	savePubapi(b);
	saveArtifacts(b);
}

Package* Package::load($Module* module, $String* l) {
	$init(Package);
	$var($String, name, $nc(l)->substring(2));
	return $new(Package, module, name);
}

void Package::saveDependencies($StringBuilder* b) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->dependencies)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, fullyQualifiedFrom, $cast($String, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(($cast($Set, $($nc(this->dependencies)->get(fullyQualifiedFrom)))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, fullyQualifiedTo, $cast($String, i$->next()));
						{
							$nc(b)->append($($String::format("D S %s -> %s%n"_s, $$new($ObjectArray, {
								$of(fullyQualifiedFrom),
								$of(fullyQualifiedTo)
							}))));
						}
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(this->cpDependencies)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, fullyQualifiedFrom, $cast($String, i$->next()));
			{
				{
					$var($Iterator, i$, $nc(($cast($Set, $($nc(this->cpDependencies)->get(fullyQualifiedFrom)))))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, fullyQualifiedTo, $cast($String, i$->next()));
						{
							$nc(b)->append($($String::format("D C %s -> %s%n"_s, $$new($ObjectArray, {
								$of(fullyQualifiedFrom),
								$of(fullyQualifiedTo)
							}))));
						}
					}
				}
			}
		}
	}
}

void Package::savePubapi($StringBuilder* b) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($nc($($nc(this->pubApi)->asListOfStrings()))->stream()))->flatMap(static_cast<$Function*>($$new(Package$$Lambda$lambda$savePubapi$0)))))->forEach(static_cast<$Consumer*>($$new(Package$$Lambda$append$1, static_cast<$StringBuilder*>($nc(b)))));
}

void Package::savePackages($Map* packages, $StringBuilder* b) {
	$init(Package);
	$useLocalCurrentObjectStackCache();
	$var($List, sorted_packages, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($nc(packages)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				sorted_packages->add(key);
			}
		}
	}
	$Collections::sort(sorted_packages);
	{
		$var($Iterator, i$, sorted_packages->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, s, $cast($String, i$->next()));
			{
				$var(Package, p, $cast(Package, packages->get(s)));
				$nc(p)->save(b);
			}
		}
	}
}

void Package::addArtifact($String* a) {
	$nc(this->artifacts$)->put(a, $$new($File, a));
}

void Package::addArtifact($File* f) {
	$nc(this->artifacts$)->put($($nc(f)->getPath()), f);
}

void Package::addArtifacts($Set* as) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(as)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($URI, u, $cast($URI, i$->next()));
			{
				addArtifact($$new($File, u));
			}
		}
	}
}

void Package::setArtifacts($Set* as) {
	$Assert::check(!$nc(this->artifacts$)->isEmpty());
	$set(this, artifacts$, $new($HashMap));
	addArtifacts(as);
}

void Package::loadArtifact($String* l) {
	$useLocalCurrentObjectStackCache();
	int32_t dp = $nc(l)->indexOf((int32_t)u' ', 2);
	$var($String, fn, l->substring(2, dp));
	int64_t last_modified = $Long::parseLong($(l->substring(dp + 1)));
	$var($File, f, $new($File, fn));
	bool var$0 = f->exists();
	if (var$0 && f->lastModified() != last_modified) {
		$Log::debug($$str({"Removing "_s, $(f->getPath()), " since its timestamp does not match javac_state."_s}));
		f->delete$();
	}
	$nc(this->artifacts$)->put($(f->getPath()), f);
}

void Package::saveArtifacts($StringBuilder* b) {
	$useLocalCurrentObjectStackCache();
	$var($List, sorted_artifacts, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($nc(this->artifacts$)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			{
				sorted_artifacts->add(f);
			}
		}
	}
	$Collections::sort(sorted_artifacts);
	{
		$var($Iterator, i$, sorted_artifacts->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, f, $cast($File, i$->next()));
			{
				$var($String, var$1, $$str({"A "_s, $($nc(f)->getPath()), " "_s}));
				$var($String, var$0, $$concat(var$1, $$str(f->lastModified())));
				$nc(b)->append($$concat(var$0, "\n"));
			}
		}
	}
}

void Package::deleteArtifacts() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(this->artifacts$)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, a, $cast($File, i$->next()));
			{
				$nc(a)->delete$();
			}
		}
	}
}

int32_t Package::compareTo(Object$* o) {
	return this->compareTo($cast(Package, o));
}

$Stream* Package::lambda$savePubapi$0($String* l) {
	$init(Package);
	return $Stream::of($$new($StringArray, {
		"I "_s,
		l,
		"\n"_s
	}));
}

void clinit$Package($Class* class$) {
	$assignStatic(Package::DEP_PATTERN, $Pattern::compile("(.*) -> (.*)"_s));
}

Package::Package() {
}

$Class* Package::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Package$$Lambda$lambda$savePubapi$0::classInfo$.name)) {
			return Package$$Lambda$lambda$savePubapi$0::load$(name, initialize);
		}
		if (name->equals(Package$$Lambda$append$1::classInfo$.name)) {
			return Package$$Lambda$append$1::load$(name, initialize);
		}
	}
	$loadClass(Package, name, initialize, &_Package_ClassInfo_, clinit$Package, allocate$Package);
	return class$;
}

$Class* Package::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com