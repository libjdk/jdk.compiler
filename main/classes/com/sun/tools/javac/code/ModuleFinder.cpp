#include <com/sun/tools/javac/code/ModuleFinder.h>

#include <com/sun/tools/javac/code/ClassFinder$BadClassFile.h>
#include <com/sun/tools/javac/code/ClassFinder.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/ModuleFinder$1.h>
#include <com/sun/tools/javac/code/ModuleFinder$2.h>
#include <com/sun/tools/javac/code/ModuleFinder$ModuleLocationIterator.h>
#include <com/sun/tools/javac/code/ModuleFinder$ModuleNameFromSourceReader.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/jvm/ModuleNameReader$BadClassFile.h>
#include <com/sun/tools/javac/jvm/ModuleNameReader.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Errors.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef AUTOMATIC_MODULE
#undef CLASS
#undef CLASS_OUTPUT
#undef ERR
#undef MODULE_SOURCE_PATH
#undef NULL_COMPLETER
#undef PATCH_MODULE_PATH
#undef SOURCE
#undef SOURCE_PATH
#undef SYSTEM_MODULE
#undef SYSTEM_MODULES
#undef UPGRADE_MODULE_PATH

using $ClassFinder = ::com::sun::tools::javac::code::ClassFinder;
using $ClassFinder$BadClassFile = ::com::sun::tools::javac::code::ClassFinder$BadClassFile;
using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $ModuleFinder$1 = ::com::sun::tools::javac::code::ModuleFinder$1;
using $ModuleFinder$2 = ::com::sun::tools::javac::code::ModuleFinder$2;
using $ModuleFinder$ModuleLocationIterator = ::com::sun::tools::javac::code::ModuleFinder$ModuleLocationIterator;
using $ModuleFinder$ModuleNameFromSourceReader = ::com::sun::tools::javac::code::ModuleFinder$ModuleNameFromSourceReader;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $ModuleNameReader = ::com::sun::tools::javac::jvm::ModuleNameReader;
using $ModuleNameReader$BadClassFile = ::com::sun::tools::javac::jvm::ModuleNameReader$BadClassFile;
using $CompilerProperties$Errors = ::com::sun::tools::javac::resources::CompilerProperties$Errors;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $AbstractLog = ::com::sun::tools::javac::util::AbstractLog;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _ModuleFinder_FieldInfo_[] = {
	{"moduleFinderKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/code/ModuleFinder;>;", $PROTECTED | $STATIC | $FINAL, $staticField(ModuleFinder, moduleFinderKey)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(ModuleFinder, log)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, $PRIVATE | $FINAL, $field(ModuleFinder, syms)},
	{"names", "Lcom/sun/tools/javac/util/Names;", nullptr, $PRIVATE | $FINAL, $field(ModuleFinder, names)},
	{"classFinder", "Lcom/sun/tools/javac/code/ClassFinder;", nullptr, $PRIVATE | $FINAL, $field(ModuleFinder, classFinder)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(ModuleFinder, fileManager)},
	{"diags", "Lcom/sun/tools/javac/util/JCDiagnostic$Factory;", nullptr, $PRIVATE | $FINAL, $field(ModuleFinder, diags)},
	{"dcfh", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $PRIVATE | $FINAL, $field(ModuleFinder, dcfh)},
	{"moduleNameReader", "Lcom/sun/tools/javac/jvm/ModuleNameReader;", nullptr, $PRIVATE, $field(ModuleFinder, moduleNameReader)},
	{"moduleNameFromSourceReader", "Lcom/sun/tools/javac/code/ModuleFinder$ModuleNameFromSourceReader;", nullptr, $PUBLIC, $field(ModuleFinder, moduleNameFromSourceReader)},
	{"moduleLocationIterator", "Lcom/sun/tools/javac/code/ModuleFinder$ModuleLocationIterator;", nullptr, 0, $field(ModuleFinder, moduleLocationIterator)},
	{}
};

$MethodInfo _ModuleFinder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(static_cast<void(ModuleFinder::*)($Context*)>(&ModuleFinder::init$))},
	{"findAllModules", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PUBLIC},
	{"findModule", "(Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"findModule", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"findModuleInfo", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)V", nullptr, $PRIVATE, $method(static_cast<void(ModuleFinder::*)($Symbol$ModuleSymbol*)>(&ModuleFinder::findModuleInfo))},
	{"findSingleModule", "()Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PUBLIC},
	{"getDescription", "(Ljavax/tools/StandardLocation;)Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;", nullptr, 0},
	{"getModuleInfoFromLocation", "(Ljavax/tools/JavaFileManager$Location;Ljavax/tools/JavaFileObject$Kind;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(static_cast<$JavaFileObject*(ModuleFinder::*)($JavaFileManager$Location*,$JavaFileObject$Kind*)>(&ModuleFinder::getModuleInfoFromLocation)), "java.io.IOException"},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/code/ModuleFinder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ModuleFinder*(*)($Context*)>(&ModuleFinder::instance))},
	{"preferredFileObject", "(Ljavax/tools/JavaFileObject;Ljavax/tools/JavaFileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(static_cast<$JavaFileObject*(ModuleFinder::*)($JavaFileObject*,$JavaFileObject*)>(&ModuleFinder::preferredFileObject))},
	{"readModule", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;", nullptr, $PRIVATE, $method(static_cast<$Symbol$ModuleSymbol*(ModuleFinder::*)($JavaFileObject*)>(&ModuleFinder::readModule)), "java.io.IOException"},
	{"readModuleName", "(Ljavax/tools/JavaFileObject;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ModuleFinder::*)($JavaFileObject*)>(&ModuleFinder::readModuleName)), "java.io.IOException,com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile"},
	{"scanModulePath", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Symbol$ModuleSymbol;>;", $PRIVATE, $method(static_cast<$List*(ModuleFinder::*)($Symbol$ModuleSymbol*)>(&ModuleFinder::scanModulePath))},
	{}
};

$InnerClassInfo _ModuleFinder_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.ModuleFinder$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.ModuleFinder$ModuleNameFromSourceReader", "com.sun.tools.javac.code.ModuleFinder", "ModuleNameFromSourceReader", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.javac.code.ModuleFinder$ModuleLocationIterator", "com.sun.tools.javac.code.ModuleFinder", "ModuleLocationIterator", 0},
	{"com.sun.tools.javac.code.ModuleFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModuleFinder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.ModuleFinder",
	"java.lang.Object",
	nullptr,
	_ModuleFinder_FieldInfo_,
	_ModuleFinder_MethodInfo_,
	nullptr,
	nullptr,
	_ModuleFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.ModuleFinder$2,com.sun.tools.javac.code.ModuleFinder$ModuleNameFromSourceReader,com.sun.tools.javac.code.ModuleFinder$ModuleLocationIterator,com.sun.tools.javac.code.ModuleFinder$1"
};

$Object* allocate$ModuleFinder($Class* clazz) {
	return $of($alloc(ModuleFinder));
}

$Context$Key* ModuleFinder::moduleFinderKey = nullptr;

ModuleFinder* ModuleFinder::instance($Context* context) {
	$init(ModuleFinder);
	$var(ModuleFinder, instance, $cast(ModuleFinder, $nc(context)->get(ModuleFinder::moduleFinderKey)));
	if (instance == nullptr) {
		$assign(instance, $new(ModuleFinder, context));
	}
	return instance;
}

void ModuleFinder::init$($Context* context) {
	$set(this, moduleLocationIterator, $new($ModuleFinder$ModuleLocationIterator, this));
	$nc(context)->put(ModuleFinder::moduleFinderKey, $of(this));
	$set(this, names, $Names::instance(context));
	$set(this, syms, $Symtab::instance(context));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, log, $Log::instance(context));
	$set(this, classFinder, $ClassFinder::instance(context));
	$set(this, diags, $JCDiagnostic$Factory::instance(context));
	$set(this, dcfh, $DeferredCompletionFailureHandler::instance(context));
}

$Symbol$ModuleSymbol* ModuleFinder::findModule($Name* name) {
	return findModule($($nc(this->syms)->enterModule(name)));
}

$Symbol$ModuleSymbol* ModuleFinder::findModule($Symbol$ModuleSymbol* msym) {
	$init($Kinds$Kind);
	if ($nc(msym)->kind != $Kinds$Kind::ERR && msym->sourceLocation == nullptr && msym->classLocation == nullptr) {
		$var($List, list, scanModulePath(msym));
		if ($nc(list)->isEmpty()) {
			$set(msym, kind, $Kinds$Kind::ERR);
		}
	}
	if ($nc(msym)->kind != $Kinds$Kind::ERR && $nc(msym->module_info)->sourcefile == nullptr && $nc(msym->module_info)->classfile == nullptr) {
		findModuleInfo(msym);
	}
	return msym;
}

$List* ModuleFinder::findAllModules() {
	$useLocalCurrentObjectStackCache();
	$var($List, list, scanModulePath(nullptr));
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ModuleSymbol, msym, $cast($Symbol$ModuleSymbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(msym)->kind != $Kinds$Kind::ERR && $nc(msym->module_info)->sourcefile == nullptr && $nc(msym->module_info)->classfile == nullptr) {
					findModuleInfo(msym);
				}
			}
		}
	}
	return list;
}

$Symbol$ModuleSymbol* ModuleFinder::findSingleModule() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($StandardLocation);
		$init($JavaFileObject$Kind);
		$var($JavaFileObject, src_fo, getModuleInfoFromLocation($StandardLocation::SOURCE_PATH, $JavaFileObject$Kind::SOURCE));
		$var($JavaFileObject, class_fo, getModuleInfoFromLocation($StandardLocation::CLASS_OUTPUT, $JavaFileObject$Kind::CLASS));
		$var($JavaFileObject, fo, (src_fo == nullptr) ? class_fo : (class_fo == nullptr) ? src_fo : $nc(this->classFinder)->preferredFileObject(src_fo, class_fo));
		$var($Symbol$ModuleSymbol, msym, nullptr);
		if (fo == nullptr) {
			$assign(msym, $nc(this->syms)->unnamedModule);
		} else {
			$assign(msym, readModule(fo));
		}
		if ($nc(msym)->patchLocation == nullptr) {
			$set(msym, classLocation, $StandardLocation::CLASS_OUTPUT);
		} else {
			$set(msym, patchOutputLocation, $StandardLocation::CLASS_OUTPUT);
		}
		return msym;
	} catch ($IOException& e) {
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$Symbol$ModuleSymbol* ModuleFinder::readModule($JavaFileObject* fo) {
	$useLocalCurrentObjectStackCache();
	$var($Name, name, nullptr);
	$init($ModuleFinder$2);
	switch ($nc($ModuleFinder$2::$SwitchMap$javax$tools$JavaFileObject$Kind)->get($nc(($($nc(fo)->getKind())))->ordinal())) {
	case 1:
		{
			$assign(name, $nc(this->moduleNameFromSourceReader)->readModuleName(fo));
			if (name == nullptr) {
				$init($CompilerProperties$Fragments);
				$var($JCDiagnostic, diag, $nc(this->diags)->fragment($CompilerProperties$Fragments::FileDoesNotContainModule));
				$var($Symbol$ClassSymbol, errModuleInfo, $nc(this->syms)->defineClass($nc(this->names)->module_info, $nc(this->syms)->errModule));
				$throwNew($ClassFinder$BadClassFile, errModuleInfo, fo, diag, this->diags, this->dcfh);
			}
			break;
		}
	case 2:
		{
			try {
				$assign(name, $nc(this->names)->fromString($(readModuleName(fo))));
			} catch ($ModuleNameReader$BadClassFile& ex) {
				$assign(name, $nc(this->names)->error);
			} catch ($IOException& ex) {
				$assign(name, $nc(this->names)->error);
			}
			break;
		}
	default:
		{
			$Assert::error();
			$assign(name, $nc(this->names)->error);
			break;
		}
	}
	$var($Symbol$ModuleSymbol, msym, $nc(this->syms)->enterModule(name));
	if ($nc($nc(msym)->module_info)->classfile == nullptr) {
		$set($nc(msym->module_info), classfile, fo);
		$init($StandardLocation);
		if ($nc(this->fileManager)->hasLocation($StandardLocation::PATCH_MODULE_PATH) && name != $nc(this->names)->error) {
			$set(msym, patchLocation, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::PATCH_MODULE_PATH), $($nc(name)->toString())));
			if (msym->patchLocation != nullptr) {
				$var($JavaFileObject, patchFO, getModuleInfoFromLocation($StandardLocation::CLASS_OUTPUT, $JavaFileObject$Kind::CLASS));
				$assign(patchFO, preferredFileObject($(getModuleInfoFromLocation(msym->patchLocation, $JavaFileObject$Kind::CLASS)), patchFO));
				$assign(patchFO, preferredFileObject($(getModuleInfoFromLocation(msym->patchLocation, $JavaFileObject$Kind::SOURCE)), patchFO));
				if (patchFO != nullptr) {
					$set($nc(msym->module_info), classfile, patchFO);
				}
			}
		}
		$init($Symbol$Completer);
		$set(msym, completer, $Symbol$Completer::NULL_COMPLETER);
		$nc(this->classFinder)->fillIn(msym->module_info);
	}
	return msym;
}

$String* ModuleFinder::readModuleName($JavaFileObject* jfo) {
	if (this->moduleNameReader == nullptr) {
		$set(this, moduleNameReader, $new($ModuleNameReader));
	}
	return $nc(this->moduleNameReader)->readModuleName(jfo);
}

$JavaFileObject* ModuleFinder::getModuleInfoFromLocation($JavaFileManager$Location* location, $JavaFileObject$Kind* kind) {
	if (location == nullptr || !$nc(this->fileManager)->hasLocation(location)) {
		return nullptr;
	}
	return $nc(this->fileManager)->getJavaFileForInput(location, $($nc($nc(this->names)->module_info)->toString()), kind);
}

$List* ModuleFinder::scanModulePath($Symbol$ModuleSymbol* toFind) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, results, $new($ListBuffer));
	$var($Map, namesInSet, $new($HashMap));
	$init($StandardLocation);
	bool multiModuleMode = $nc(this->fileManager)->hasLocation($StandardLocation::MODULE_SOURCE_PATH);
	while ($nc(this->moduleLocationIterator)->hasNext()) {
		$var($Set, locns, $cast($Set, $nc(this->moduleLocationIterator)->next()));
		namesInSet->clear();
		{
			$var($Iterator, i$, $nc(locns)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($JavaFileManager$Location, l, $cast($JavaFileManager$Location, i$->next()));
				{
					try {
						$var($Name, n, $nc(this->names)->fromString($($nc(this->fileManager)->inferModuleName(l))));
						if (namesInSet->put(n, l) == nullptr) {
							$var($Symbol$ModuleSymbol, msym, $nc(this->syms)->enterModule(n));
							if ($nc(msym)->sourceLocation != nullptr || $nc(msym)->classLocation != nullptr) {
								continue;
							}
							if ($nc(this->fileManager)->hasLocation($StandardLocation::PATCH_MODULE_PATH) && $nc(msym)->patchLocation == nullptr) {
								$set(msym, patchLocation, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::PATCH_MODULE_PATH), $($nc(msym->name)->toString())));
								if (msym->patchLocation != nullptr && multiModuleMode && $nc(this->fileManager)->hasLocation($StandardLocation::CLASS_OUTPUT)) {
									$set(msym, patchOutputLocation, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::CLASS_OUTPUT), $($nc(msym->name)->toString())));
								}
							}
							if ($nc(this->moduleLocationIterator)->outer == $StandardLocation::MODULE_SOURCE_PATH) {
								$set($nc(msym), sourceLocation, l);
								if ($nc(this->fileManager)->hasLocation($StandardLocation::CLASS_OUTPUT)) {
									$set(msym, classLocation, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::CLASS_OUTPUT), $($nc(msym->name)->toString())));
								}
							} else {
								$set($nc(msym), classLocation, l);
							}
							if ($nc(this->moduleLocationIterator)->outer == $StandardLocation::SYSTEM_MODULES || $nc(this->moduleLocationIterator)->outer == $StandardLocation::UPGRADE_MODULE_PATH) {
								$nc(msym)->flags_field |= $Flags::SYSTEM_MODULE;
							}
							if (toFind == nullptr || (toFind == msym && ($nc(msym)->sourceLocation != nullptr || $nc(msym)->classLocation != nullptr))) {
								results->add(msym);
							}
						} else {
							$nc(this->log)->error($($CompilerProperties$Errors::DuplicateModuleOnPath($(getDescription($nc(this->moduleLocationIterator)->outer)), n)));
						}
					} catch ($IOException& e) {
					}
				}
			}
		}
		if (toFind != nullptr && results->nonEmpty()) {
			return results->toList();
		}
	}
	return results->toList();
}

void ModuleFinder::findModuleInfo($Symbol$ModuleSymbol* msym) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($JavaFileObject, fo, nullptr);
		$init($JavaFileObject$Kind);
		$assign(fo, getModuleInfoFromLocation($nc(msym)->patchOutputLocation, $JavaFileObject$Kind::CLASS));
		$assign(fo, preferredFileObject($(getModuleInfoFromLocation($nc(msym)->patchLocation, $JavaFileObject$Kind::CLASS)), fo));
		$assign(fo, preferredFileObject($(getModuleInfoFromLocation($nc(msym)->patchLocation, $JavaFileObject$Kind::SOURCE)), fo));
		if (fo == nullptr) {
			$assign(fo, getModuleInfoFromLocation($nc(msym)->classLocation, $JavaFileObject$Kind::CLASS));
			$assign(fo, preferredFileObject($(getModuleInfoFromLocation($nc(msym)->sourceLocation, $JavaFileObject$Kind::SOURCE)), fo));
		}
		if (fo == nullptr) {
			$var($String, moduleName, $nc(msym)->sourceLocation == nullptr && msym->classLocation != nullptr ? $nc(this->fileManager)->inferModuleName($nc(msym)->classLocation) : ($String*)nullptr);
			if (moduleName != nullptr) {
				$set($nc($nc(msym)->module_info), classfile, nullptr);
				msym->flags_field |= $Flags::AUTOMATIC_MODULE;
			} else {
				$init($Kinds$Kind);
				$set($nc(msym), kind, $Kinds$Kind::ERR);
			}
		} else {
			$set($nc($nc(msym)->module_info), classfile, fo);
			$set($nc(msym->module_info), completer, $new($ModuleFinder$1, this, msym));
		}
	} catch ($IOException& e) {
		$init($Kinds$Kind);
		$set($nc(msym), kind, $Kinds$Kind::ERR);
	}
}

$JavaFileObject* ModuleFinder::preferredFileObject($JavaFileObject* fo1, $JavaFileObject* fo2) {
	if (fo1 == nullptr) {
		return fo2;
	}
	if (fo2 == nullptr) {
		return fo1;
	}
	return $nc(this->classFinder)->preferredFileObject(fo1, fo2);
}

$JCDiagnostic$Fragment* ModuleFinder::getDescription($StandardLocation* l) {
	$init($ModuleFinder$2);
	switch ($nc($ModuleFinder$2::$SwitchMap$javax$tools$StandardLocation)->get($nc((l))->ordinal())) {
	case 1:
		{
			$init($CompilerProperties$Fragments);
			return $CompilerProperties$Fragments::LocnModule_path;
		}
	case 2:
		{
			$init($CompilerProperties$Fragments);
			return $CompilerProperties$Fragments::LocnModule_source_path;
		}
	case 3:
		{
			$init($CompilerProperties$Fragments);
			return $CompilerProperties$Fragments::LocnSystem_modules;
		}
	case 4:
		{
			$init($CompilerProperties$Fragments);
			return $CompilerProperties$Fragments::LocnUpgrade_module_path;
		}
	default:
		{
			$throwNew($AssertionError);
		}
	}
}

void clinit$ModuleFinder($Class* class$) {
	$assignStatic(ModuleFinder::moduleFinderKey, $new($Context$Key));
}

ModuleFinder::ModuleFinder() {
}

$Class* ModuleFinder::load$($String* name, bool initialize) {
	$loadClass(ModuleFinder, name, initialize, &_ModuleFinder_ClassInfo_, clinit$ModuleFinder, allocate$ModuleFinder);
	return class$;
}

$Class* ModuleFinder::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com