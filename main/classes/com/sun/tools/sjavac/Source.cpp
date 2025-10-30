#include <com/sun/tools/sjavac/Source.h>

#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/Module.h>
#include <com/sun/tools/sjavac/Package.h>
#include <com/sun/tools/sjavac/Source$1.h>
#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileVisitor.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/PathMatcher.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/regex/PatternSyntaxException.h>
#include <jcpp.h>

#undef CL
#undef GS

using $Log = ::com::sun::tools::sjavac::Log;
using $Module = ::com::sun::tools::sjavac::Module;
using $Package = ::com::sun::tools::sjavac::Package;
using $Source$1 = ::com::sun::tools::sjavac::Source$1;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileVisitor = ::java::nio::file::FileVisitor;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $PathMatcher = ::java::nio::file::PathMatcher;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $PatternSyntaxException = ::java::util::regex::PatternSyntaxException;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {

$FieldInfo _Source_FieldInfo_[] = {
	{"pkg", "Lcom/sun/tools/sjavac/Package;", nullptr, $PRIVATE, $field(Source, pkg$)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Source, name$)},
	{"suffix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Source, suffix$)},
	{"lastModified", "J", nullptr, $PRIVATE, $field(Source, lastModified$)},
	{"file", "Ljava/io/File;", nullptr, $PRIVATE, $field(Source, file$)},
	{"isGenerated", "Z", nullptr, $PRIVATE, $field(Source, isGenerated$)},
	{"linkedOnly", "Z", nullptr, $PRIVATE, $field(Source, linkedOnly)},
	{}
};

$MethodInfo _Source_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/sjavac/Module;Ljava/lang/String;Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(Source::*)($Module*,$String*,$File*)>(&Source::init$))},
	{"<init>", "(Lcom/sun/tools/sjavac/Package;Ljava/lang/String;J)V", nullptr, $PUBLIC, $method(static_cast<void(Source::*)($Package*,$String*,int64_t)>(&Source::init$))},
	{"compareTo", "(Lcom/sun/tools/sjavac/Source;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"createPathMatchers", "(Ljava/nio/file/FileSystem;Ljava/util/List;)Ljava/util/List;", "(Ljava/nio/file/FileSystem;Ljava/util/List<Ljava/lang/String;>;)Ljava/util/List<Ljava/nio/file/PathMatcher;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($FileSystem*,$List*)>(&Source::createPathMatchers))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"file", "()Ljava/io/File;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isGenerated", "()Z", nullptr, $PUBLIC},
	{"isLinkedOnly", "()Z", nullptr, $PUBLIC},
	{"lastModified", "()J", nullptr, $PUBLIC},
	{"load", "(Lcom/sun/tools/sjavac/Package;Ljava/lang/String;Z)Lcom/sun/tools/sjavac/Source;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Source*(*)($Package*,$String*,bool)>(&Source::load))},
	{"markAsGenerated", "()V", nullptr, $PUBLIC},
	{"markAsLinkedOnly", "()V", nullptr, $PUBLIC},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"packageOfJavaFile", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Path*,$Path*)>(&Source::packageOfJavaFile))},
	{"pkg", "()Lcom/sun/tools/sjavac/Package;", nullptr, $PUBLIC},
	{"save", "(Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(static_cast<void(Source::*)($StringBuilder*)>(&Source::save))},
	{"saveSources", "(Ljava/util/Map;Ljava/lang/StringBuilder;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;Ljava/lang/StringBuilder;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Map*,$StringBuilder*)>(&Source::saveSources))},
	{"scanRoot", "(Ljava/io/File;Ljava/util/Set;Ljava/util/List;Ljava/util/List;Ljava/util/Map;Ljava/util/Map;Lcom/sun/tools/sjavac/Module;ZZZ)V", "(Ljava/io/File;Ljava/util/Set<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;Ljava/util/List<Ljava/lang/String;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Source;>;Ljava/util/Map<Ljava/lang/String;Lcom/sun/tools/sjavac/Module;>;Lcom/sun/tools/sjavac/Module;ZZZ)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($File*,$Set*,$List*,$List*,$Map*,$Map*,$Module*,bool,bool,bool)>(&Source::scanRoot)), "java.io.IOException,com.sun.tools.sjavac.ProblemException"},
	{"setPackage", "(Lcom/sun/tools/sjavac/Package;)V", nullptr, $PUBLIC},
	{"suffix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Source_InnerClassesInfo_[] = {
	{"com.sun.tools.sjavac.Source$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Source_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.sjavac.Source",
	"java.lang.Object",
	"java.lang.Comparable",
	_Source_FieldInfo_,
	_Source_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/tools/sjavac/Source;>;",
	nullptr,
	_Source_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.sjavac.Source$1"
};

$Object* allocate$Source($Class* clazz) {
	return $of($alloc(Source));
}

bool Source::equals(Object$* o) {
	$var(Source, source, nullptr);
	bool var$1 = $instanceOf(Source, o);
	if (var$1) {
		$assign(source, $cast(Source, o));
		var$1 = true;
	}
	bool var$0 = (var$1);
	return var$0 && $nc(this->name$)->equals($nc(source)->name$);
}

int32_t Source::compareTo(Source* o) {
	return $nc(this->name$)->compareTo($nc(o)->name$);
}

int32_t Source::hashCode() {
	return $nc(this->name$)->hashCode();
}

void Source::init$($Module* m, $String* n, $File* f) {
	$set(this, name$, n);
	int32_t dp = $nc(n)->lastIndexOf("."_s);
	if (dp != -1) {
		$set(this, suffix$, n->substring(dp));
	} else {
		$set(this, suffix$, ""_s);
	}
	$set(this, file$, f);
	this->lastModified$ = $nc(f)->lastModified();
	this->linkedOnly = false;
}

void Source::init$($Package* p, $String* n, int64_t lm) {
	$set(this, pkg$, p);
	$set(this, name$, n);
	int32_t dp = $nc(n)->lastIndexOf("."_s);
	if (dp != -1) {
		$set(this, suffix$, n->substring(dp));
	} else {
		$set(this, suffix$, ""_s);
	}
	$set(this, file$, nullptr);
	this->lastModified$ = lm;
	this->linkedOnly = false;
	int32_t ls = n->lastIndexOf((int32_t)u'/');
}

$String* Source::name() {
	return this->name$;
}

$String* Source::suffix() {
	return this->suffix$;
}

$Package* Source::pkg() {
	return this->pkg$;
}

$File* Source::file() {
	return this->file$;
}

int64_t Source::lastModified() {
	return this->lastModified$;
}

void Source::setPackage($Package* p) {
	$set(this, pkg$, p);
}

void Source::markAsGenerated() {
	this->isGenerated$ = true;
}

bool Source::isGenerated() {
	return this->isGenerated$;
}

void Source::markAsLinkedOnly() {
	this->linkedOnly = true;
}

bool Source::isLinkedOnly() {
	return this->linkedOnly;
}

void Source::save($StringBuilder* b) {
	$useLocalCurrentObjectStackCache();
	$var($String, CL, this->linkedOnly ? "L"_s : "C"_s);
	$var($String, GS, this->isGenerated$ ? "G"_s : "S"_s);
	$nc(b)->append($$str({GS, " "_s, CL, " "_s, this->name$, " "_s, $$str($nc(this->file$)->lastModified()), "\n"_s}));
}

Source* Source::load($Package* lastPackage, $String* l, bool isGenerated) {
	$init(Source);
	$useLocalCurrentObjectStackCache();
	int32_t sp = $nc(l)->indexOf((int32_t)u' ', 4);
	if (sp == -1) {
		return nullptr;
	}
	$var($String, name, l->substring(4, sp));
	int64_t last_modified = $Long::parseLong($(l->substring(sp + 1)));
	bool isLinkedOnly = false;
	if (l->charAt(2) == u'L') {
		isLinkedOnly = true;
	} else if (l->charAt(2) == u'C') {
		isLinkedOnly = false;
	} else {
		return nullptr;
	}
	$var(Source, s, $new(Source, lastPackage, name, last_modified));
	$set(s, file$, $new($File, name));
	if (isGenerated) {
		s->markAsGenerated();
	}
	if (isLinkedOnly) {
		s->markAsLinkedOnly();
	}
	return s;
}

void Source::saveSources($Map* sources, $StringBuilder* b) {
	$init(Source);
	$useLocalCurrentObjectStackCache();
	$var($List, sorted_sources, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($nc(sources)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				sorted_sources->add(key);
			}
		}
	}
	$Collections::sort(sorted_sources);
	{
		$var($Iterator, i$, sorted_sources->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, key, $cast($String, i$->next()));
			{
				$var(Source, s, $cast(Source, sources->get(key)));
				$nc(s)->save(b);
			}
		}
	}
}

void Source::scanRoot($File* root, $Set* suffixes, $List* excludes, $List* includes$renamed, $Map* foundFiles, $Map* foundModules, $Module* currentModule, bool permitSourcesWithoutPackage, bool inGensrc, bool inLinksrc) {
	$init(Source);
	$useLocalCurrentObjectStackCache();
	$var($List, includes, includes$renamed);
	if (root == nullptr) {
		return;
	}
	$var($FileSystem, fs, $nc($($nc(root)->toPath()))->getFileSystem());
	if ($nc(includes)->isEmpty()) {
		$assign(includes, $Collections::singletonList("**"_s));
	}
	$var($List, includeMatchers, createPathMatchers(fs, includes));
	$var($List, excludeMatchers, createPathMatchers(fs, excludes));
	$var($Path, var$0, root->toPath());
	$Files::walkFileTree(var$0, $$new($Source$1, root, includeMatchers, excludeMatchers, suffixes, foundFiles, currentModule, inLinksrc, inGensrc));
}

$List* Source::createPathMatchers($FileSystem* fs, $List* patterns) {
	$init(Source);
	$useLocalCurrentObjectStackCache();
	$var($List, matchers, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(patterns)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, pattern, $cast($String, i$->next()));
			{
				try {
					matchers->add($($nc(fs)->getPathMatcher($$str({"glob:"_s, pattern}))));
				} catch ($PatternSyntaxException& e) {
					$Log::error($$str({"Invalid pattern: "_s, pattern}));
					$throw(e);
				}
			}
		}
	}
	return matchers;
}

$String* Source::packageOfJavaFile($Path* sourceRoot, $Path* javaFile) {
	$init(Source);
	$useLocalCurrentObjectStackCache();
	$var($Path, javaFileDir, $nc(javaFile)->getParent());
	$var($Path, packageDir, $nc(sourceRoot)->relativize(javaFileDir));
	$var($List, separateDirs, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(packageDir)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Path, pathElement, $cast($Path, i$->next()));
			{
				separateDirs->add($($nc($($nc(pathElement)->getFileName()))->toString()));
			}
		}
	}
	return $String::join(static_cast<$CharSequence*>("."_s), static_cast<$Iterable*>(separateDirs));
}

$String* Source::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s[pkg: %s, name: %s, suffix: %s, file: %s, isGenerated: %b, linkedOnly: %b]"_s, $$new($ObjectArray, {
		$($of($of(this)->getClass()->getSimpleName())),
		$of(this->pkg$),
		$of(this->name$),
		$of(this->suffix$),
		$of(this->file$),
		$($of($Boolean::valueOf(this->isGenerated$))),
		$($of($Boolean::valueOf(this->linkedOnly)))
	}));
}

int32_t Source::compareTo(Object$* o) {
	return this->compareTo($cast(Source, o));
}

Source::Source() {
}

$Class* Source::load$($String* name, bool initialize) {
	$loadClass(Source, name, initialize, &_Source_ClassInfo_, allocate$Source);
	return class$;
}

$Class* Source::class$ = nullptr;

			} // sjavac
		} // tools
	} // sun
} // com