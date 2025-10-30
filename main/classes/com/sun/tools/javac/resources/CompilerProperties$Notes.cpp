#include <com/sun/tools/javac/resources/CompilerProperties$Notes.h>

#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/resources/CompilerProperties.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/File.h>
#include <java/nio/file/Path.h>
#include <java/util/List.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

using $Source = ::com::sun::tools::javac::code::Source;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $CompilerProperties = ::com::sun::tools::javac::resources::CompilerProperties;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $Name = ::com::sun::tools::javac::util::Name;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Path = ::java::nio::file::Path;
using $List = ::java::util::List;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

$FieldInfo _CompilerProperties$Notes_FieldInfo_[] = {
	{"CompressedDiags", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, CompressedDiags)},
	{"DeprecatedPlural", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, DeprecatedPlural)},
	{"DeprecatedPluralAdditional", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, DeprecatedPluralAdditional)},
	{"DeprecatedRecompile", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, DeprecatedRecompile)},
	{"Note", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, Note)},
	{"PreviewRecompile", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, PreviewRecompile)},
	{"RemovalPlural", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, RemovalPlural)},
	{"RemovalPluralAdditional", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, RemovalPluralAdditional)},
	{"RemovalRecompile", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, RemovalRecompile)},
	{"UncheckedPlural", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, UncheckedPlural)},
	{"UncheckedPluralAdditional", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, UncheckedPluralAdditional)},
	{"UncheckedRecompile", "Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CompilerProperties$Notes, UncheckedRecompile)},
	{}
};

$MethodInfo _CompilerProperties$Notes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CompilerProperties$Notes::*)()>(&CompilerProperties$Notes::init$))},
	{"DeferredMethodInst", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Symbol*,$Type*,$Type*)>(&CompilerProperties$Notes::DeferredMethodInst))},
	{"DeprecatedFilename", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($File*)>(&CompilerProperties$Notes::DeprecatedFilename))},
	{"DeprecatedFilename", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JavaFileObject*)>(&CompilerProperties$Notes::DeprecatedFilename))},
	{"DeprecatedFilename", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Path*)>(&CompilerProperties$Notes::DeprecatedFilename))},
	{"DeprecatedFilenameAdditional", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($File*)>(&CompilerProperties$Notes::DeprecatedFilenameAdditional))},
	{"DeprecatedFilenameAdditional", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JavaFileObject*)>(&CompilerProperties$Notes::DeprecatedFilenameAdditional))},
	{"DeprecatedFilenameAdditional", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Path*)>(&CompilerProperties$Notes::DeprecatedFilenameAdditional))},
	{"LambdaStat", "(ZLcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)(bool,$Symbol*)>(&CompilerProperties$Notes::LambdaStat))},
	{"MethodRefSearchResultsMulti", "(Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/lang/String;I)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JCDiagnostic$Fragment*,$String*,int32_t)>(&CompilerProperties$Notes::MethodRefSearchResultsMulti))},
	{"MrefStat", "(ZLjava/lang/Void;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)(bool,$Void*)>(&CompilerProperties$Notes::MrefStat))},
	{"MrefStat1", "(ZLcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)(bool,$Symbol*)>(&CompilerProperties$Notes::MrefStat1))},
	{"MultipleElements", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($String*,$String*,$String*)>(&CompilerProperties$Notes::MultipleElements))},
	{"PreviewFilename", "(Ljava/io/File;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($File*,$Source*)>(&CompilerProperties$Notes::PreviewFilename))},
	{"PreviewFilename", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JavaFileObject*,$Source*)>(&CompilerProperties$Notes::PreviewFilename))},
	{"PreviewFilename", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Path*,$Source*)>(&CompilerProperties$Notes::PreviewFilename))},
	{"PreviewFilenameAdditional", "(Ljava/io/File;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($File*,$Source*)>(&CompilerProperties$Notes::PreviewFilenameAdditional))},
	{"PreviewFilenameAdditional", "(Ljavax/tools/JavaFileObject;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JavaFileObject*,$Source*)>(&CompilerProperties$Notes::PreviewFilenameAdditional))},
	{"PreviewFilenameAdditional", "(Ljava/nio/file/Path;Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Path*,$Source*)>(&CompilerProperties$Notes::PreviewFilenameAdditional))},
	{"PreviewPlural", "(Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Source*)>(&CompilerProperties$Notes::PreviewPlural))},
	{"PreviewPluralAdditional", "(Lcom/sun/tools/javac/code/Source;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Source*)>(&CompilerProperties$Notes::PreviewPluralAdditional))},
	{"ProcMessager", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($String*)>(&CompilerProperties$Notes::ProcMessager))},
	{"RemovalFilename", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($File*)>(&CompilerProperties$Notes::RemovalFilename))},
	{"RemovalFilename", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JavaFileObject*)>(&CompilerProperties$Notes::RemovalFilename))},
	{"RemovalFilename", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Path*)>(&CompilerProperties$Notes::RemovalFilename))},
	{"RemovalFilenameAdditional", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($File*)>(&CompilerProperties$Notes::RemovalFilenameAdditional))},
	{"RemovalFilenameAdditional", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JavaFileObject*)>(&CompilerProperties$Notes::RemovalFilenameAdditional))},
	{"RemovalFilenameAdditional", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Path*)>(&CompilerProperties$Notes::RemovalFilenameAdditional))},
	{"UncheckedFilename", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($File*)>(&CompilerProperties$Notes::UncheckedFilename))},
	{"UncheckedFilename", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JavaFileObject*)>(&CompilerProperties$Notes::UncheckedFilename))},
	{"UncheckedFilename", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Path*)>(&CompilerProperties$Notes::UncheckedFilename))},
	{"UncheckedFilenameAdditional", "(Ljava/io/File;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($File*)>(&CompilerProperties$Notes::UncheckedFilenameAdditional))},
	{"UncheckedFilenameAdditional", "(Ljavax/tools/JavaFileObject;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($JavaFileObject*)>(&CompilerProperties$Notes::UncheckedFilenameAdditional))},
	{"UncheckedFilenameAdditional", "(Ljava/nio/file/Path;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Path*)>(&CompilerProperties$Notes::UncheckedFilenameAdditional))},
	{"VerboseL2mDeduplicate", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Symbol*)>(&CompilerProperties$Notes::VerboseL2mDeduplicate))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$List*,$List*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$List*,$JCDiagnostic*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$List*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$JCDiagnostic*,$List*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$JCDiagnostic*,$JCDiagnostic*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$JCDiagnostic*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$JCDiagnostic$Fragment*,$List*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$JCDiagnostic$Fragment*,$JCDiagnostic*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;ILjava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,int32_t,$String*,$JCDiagnostic$Fragment*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Notes::VerboseResolveMulti))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$List*,$List*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$List*,$JCDiagnostic*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$List*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$JCDiagnostic*,$List*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$JCDiagnostic*,$JCDiagnostic*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$JCDiagnostic*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Ljava/util/List<+Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$JCDiagnostic$Fragment*,$List*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$JCDiagnostic$Fragment*,$JCDiagnostic*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{"VerboseResolveMulti1", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Symbol;Ljava/lang/Void;Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;Lcom/sun/tools/javac/util/JCDiagnostic$Fragment;)Lcom/sun/tools/javac/util/JCDiagnostic$Note;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JCDiagnostic$Note*(*)($Name*,$Symbol*,$Void*,$String*,$JCDiagnostic$Fragment*,$JCDiagnostic$Fragment*)>(&CompilerProperties$Notes::VerboseResolveMulti1))},
	{}
};

$InnerClassInfo _CompilerProperties$Notes_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.resources.CompilerProperties$Notes", "com.sun.tools.javac.resources.CompilerProperties", "Notes", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CompilerProperties$Notes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.resources.CompilerProperties$Notes",
	"java.lang.Object",
	nullptr,
	_CompilerProperties$Notes_FieldInfo_,
	_CompilerProperties$Notes_MethodInfo_,
	nullptr,
	nullptr,
	_CompilerProperties$Notes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.resources.CompilerProperties"
};

$Object* allocate$CompilerProperties$Notes($Class* clazz) {
	return $of($alloc(CompilerProperties$Notes));
}

$JCDiagnostic$Note* CompilerProperties$Notes::CompressedDiags = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedPlural = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedPluralAdditional = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedRecompile = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::Note = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::PreviewRecompile = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::RemovalPlural = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::RemovalPluralAdditional = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::RemovalRecompile = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedPlural = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedPluralAdditional = nullptr;
$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedRecompile = nullptr;

void CompilerProperties$Notes::init$() {
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeferredMethodInst($Symbol* arg0, $Type* arg1, $Type* arg2) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deferred.method.inst"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilename($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilename($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilename($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilenameAdditional($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilenameAdditional($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::DeprecatedFilenameAdditional($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "deprecated.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::LambdaStat(bool arg0, $Symbol* arg1) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "lambda.stat"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(arg0))),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::MethodRefSearchResultsMulti($JCDiagnostic$Fragment* arg0, $String* arg1, int32_t arg2) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "method.ref.search.results.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2)))
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::MrefStat(bool arg0, $Void* arg1) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "mref.stat"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(arg0))),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::MrefStat1(bool arg0, $Symbol* arg1) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "mref.stat.1"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(arg0))),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::MultipleElements($String* arg0, $String* arg1, $String* arg2) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "multiple.elements"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilename($File* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilename($JavaFileObject* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilename($Path* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilenameAdditional($File* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename.additional"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilenameAdditional($JavaFileObject* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename.additional"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewFilenameAdditional($Path* arg0, $Source* arg1) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.filename.additional"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewPlural($Source* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.plural"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::PreviewPluralAdditional($Source* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "preview.plural.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::ProcMessager($String* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "proc.messager"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilename($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilename($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilename($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilenameAdditional($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilenameAdditional($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::RemovalFilenameAdditional($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "removal.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilename($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilename($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilename($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilenameAdditional($File* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilenameAdditional($JavaFileObject* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::UncheckedFilenameAdditional($Path* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "unchecked.filename.additional"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseL2mDeduplicate($Symbol* arg0) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.l2m.deduplicate"_s, $$new($ObjectArray, {$of(arg0)}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $List* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $List* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $List* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti($Name* arg0, $Symbol* arg1, int32_t arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	$useLocalCurrentObjectStackCache();
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$($of($Integer::valueOf(arg2))),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $List* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $List* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $List* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $List* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $JCDiagnostic* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

$JCDiagnostic$Note* CompilerProperties$Notes::VerboseResolveMulti1($Name* arg0, $Symbol* arg1, $Void* arg2, $String* arg3, $JCDiagnostic$Fragment* arg4, $JCDiagnostic$Fragment* arg5) {
	$init(CompilerProperties$Notes);
	return $new($JCDiagnostic$Note, "compiler"_s, "verbose.resolve.multi.1"_s, $$new($ObjectArray, {
		$of(arg0),
		$of(arg1),
		$of(arg2),
		$of(arg3),
		$of(arg4),
		$of(arg5)
	}));
}

void clinit$CompilerProperties$Notes($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(CompilerProperties$Notes::CompressedDiags, $new($JCDiagnostic$Note, "compiler"_s, "compressed.diags"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::DeprecatedPlural, $new($JCDiagnostic$Note, "compiler"_s, "deprecated.plural"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::DeprecatedPluralAdditional, $new($JCDiagnostic$Note, "compiler"_s, "deprecated.plural.additional"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::DeprecatedRecompile, $new($JCDiagnostic$Note, "compiler"_s, "deprecated.recompile"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::Note, $new($JCDiagnostic$Note, "compiler"_s, "note"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::PreviewRecompile, $new($JCDiagnostic$Note, "compiler"_s, "preview.recompile"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::RemovalPlural, $new($JCDiagnostic$Note, "compiler"_s, "removal.plural"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::RemovalPluralAdditional, $new($JCDiagnostic$Note, "compiler"_s, "removal.plural.additional"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::RemovalRecompile, $new($JCDiagnostic$Note, "compiler"_s, "removal.recompile"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::UncheckedPlural, $new($JCDiagnostic$Note, "compiler"_s, "unchecked.plural"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::UncheckedPluralAdditional, $new($JCDiagnostic$Note, "compiler"_s, "unchecked.plural.additional"_s, $$new($ObjectArray, 0)));
	$assignStatic(CompilerProperties$Notes::UncheckedRecompile, $new($JCDiagnostic$Note, "compiler"_s, "unchecked.recompile"_s, $$new($ObjectArray, 0)));
}

CompilerProperties$Notes::CompilerProperties$Notes() {
}

$Class* CompilerProperties$Notes::load$($String* name, bool initialize) {
	$loadClass(CompilerProperties$Notes, name, initialize, &_CompilerProperties$Notes_ClassInfo_, clinit$CompilerProperties$Notes, allocate$CompilerProperties$Notes);
	return class$;
}

$Class* CompilerProperties$Notes::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com