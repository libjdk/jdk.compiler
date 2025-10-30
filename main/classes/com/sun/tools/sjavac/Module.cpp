#include <com/sun/tools/sjavac/Module.h>

#include <com/sun/tools/sjavac/Package.h>
#include <com/sun/tools/sjavac/Source.h>
#include <com/sun/tools/sjavac/pubapi/PubApi.h>
#include <java/io/File.h>
#include <java/net/URI.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Package = ::com::sun::tools::sjavac::Package;
using $Source = ::com::sun::tools::sjavac::Source;
using $PubApi = ::com::sun::tools::sjavac::pubapi::PubApi;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$FieldInfo _Module_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Module, name$)},
	{"dirname", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Module, dirname$)},
	{"packages", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Package;>;", $PRIVATE, $field(Module, packages$)},
	{"sources", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;", $PRIVATE, $field(Module, sources$)},
	{"artifacts", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/io/File;>;", $PRIVATE, $field(Module, artifacts$)},
	{}
};

$MethodInfo _Module_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Module::*)($String*,$String*)>(&Module::init$))},
	{"addArtifacts", "(Ljava/lang/String;Ljava/util/Set;)V", "(Ljava/lang/String;Ljava/util/Set<Ljava/net/URI;>;)V", $PUBLIC},
	{"addPackage", "(Lcom/sun/tools/sjavac/Package;)V", nullptr, $PUBLIC},
	{"addSource", "(Ljava/lang/String;Lcom/sun/tools/sjavac/Source;)V", nullptr, $PUBLIC},
	{"artifacts", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/io/File;>;", $PUBLIC},
	{"compareTo", "(Lcom/sun/tools/sjavac/Module;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"dirname", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hasPubapiChanged", "(Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"load", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/Module;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Module*(*)($String*)>(&Module::load))},
	{"lookupPackage", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/Package;", nullptr, $PUBLIC},
	{"lookupSource", "(Ljava/lang/String;)Lcom/sun/tools/sjavac/Source;", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"packages", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Package;>;", $PUBLIC},
	{"save", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC},
	{"saveModules", "(Ljava/util/Map;Ljava/lang/StringBuilder;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Module;>;Ljava/lang/StringBuilder;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Map*,$StringBuilder*)>(&Module::saveModules))},
	{"setDependencies", "(Ljava/lang/String;Ljava/util/Map;Z)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;Z)V", $PUBLIC},
	{"setPubapi", "(Ljava/lang/String;Lcom/sun/tools/sjavac/pubapi/PubApi;)V", nullptr, $PUBLIC},
	{"sources", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;", $PUBLIC},
	{}
};

$ClassInfo _Module_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.Module",
	"java.lang.Object",
	"java.lang.Comparable",
	_Module_FieldInfo_,
	_Module_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/tools/sjavac/Module;>;"
};

$Object* allocate$Module($Class* clazz) {
	return $of($alloc(Module));
}

void Module::init$($String* n, $String* dn) {
	$set(this, packages$, $new($HashMap));
	$set(this, sources$, $new($HashMap));
	$set(this, artifacts$, $new($HashMap));
	$set(this, name$, n);
	$set(this, dirname$, n);
}

$String* Module::name() {
	return this->name$;
}

$String* Module::dirname() {
	return this->dirname$;
}

$Map* Module::packages() {
	return this->packages$;
}

$Map* Module::sources() {
	return this->sources$;
}

$Map* Module::artifacts() {
	return this->artifacts$;
}

bool Module::equals(Object$* o) {
	$var(Module, module, nullptr);
	bool var$1 = $instanceOf(Module, o);
	if (var$1) {
		$assign(module, $cast(Module, o));
		var$1 = true;
	}
	bool var$0 = (var$1);
	return var$0 && $nc(this->name$)->equals($nc(module)->name$);
}

int32_t Module::hashCode() {
	return $nc(this->name$)->hashCode();
}

int32_t Module::compareTo(Module* o) {
	return $nc(this->name$)->compareTo($nc(o)->name$);
}

void Module::save($StringBuilder* b) {
	$nc(b)->append("M "_s)->append(this->name$)->append(":"_s)->append("\n"_s);
	$Package::savePackages(this->packages$, b);
}

Module* Module::load($String* l) {
	$init(Module);
	int32_t cp = $nc(l)->indexOf((int32_t)u':', 2);
	if (cp == -1) {
		return nullptr;
	}
	$var($String, name, l->substring(2, cp));
	return $new(Module, name, ""_s);
}

void Module::saveModules($Map* ms, $StringBuilder* b) {
	$init(Module);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(ms)->values()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(Module, m, $cast(Module, i$->next()));
			{
				$nc(m)->save(b);
			}
		}
	}
}

void Module::addPackage($Package* p) {
	$nc(this->packages$)->put($($nc(p)->name()), p);
}

$Package* Module::lookupPackage($String* pkg) {
	$var($Package, p, $cast($Package, $nc(this->packages$)->get(pkg)));
	if (p == nullptr) {
		$assign(p, $new($Package, this, pkg));
		$nc(this->packages$)->put(pkg, p);
	}
	return p;
}

void Module::addSource($String* pkg, $Source* src) {
	$useLocalCurrentObjectStackCache();
	$var($Package, p, lookupPackage(pkg));
	$nc(src)->setPackage(p);
	$nc(p)->addSource(src);
	$nc(this->sources$)->put($($nc($(src->file()))->getPath()), src);
}

$Source* Module::lookupSource($String* path) {
	return $cast($Source, $nc(this->sources$)->get(path));
}

void Module::addArtifacts($String* pkg, $Set* as) {
	$useLocalCurrentObjectStackCache();
	$var($Package, p, lookupPackage(pkg));
	{
		$var($Iterator, i$, $nc(as)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($URI, u, $cast($URI, i$->next()));
			{
				$nc(p)->addArtifact($$new($File, u));
			}
		}
	}
}

void Module::setDependencies($String* pkg, $Map* deps, bool cp) {
	$nc($(lookupPackage(pkg)))->setDependencies(deps, cp);
}

void Module::setPubapi($String* pkg, $PubApi* ps) {
	$var($Package, p, lookupPackage(pkg));
	$nc(p)->setPubapi(ps);
}

bool Module::hasPubapiChanged($String* pkg, $PubApi* newPubApi) {
	$var($Package, p, lookupPackage(pkg));
	return $nc(p)->hasPubApiChanged(newPubApi);
}

int32_t Module::compareTo(Object$* o) {
	return this->compareTo($cast(Module, o));
}

Module::Module() {
}

$Class* Module::load$($String* name, bool initialize) {
	$loadClass(Module, name, initialize, &_Module_ClassInfo_, allocate$Module);
	return class$;
}

$Class* Module::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com