/******************************************************************************
 *
 * $Id$
 *
 * Copyright (C) 1997-2000 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * All output generated with Doxygen is not covered by this license.
 *
 */

#ifndef TRANSLATOR_NL_H
#define TRANSLATOR_NL_H

#include "translator.h"

class TranslatorDutch : public Translator
{
  public:
    QCString latexBabelPackage()
    { return "dutch"; }
    QCString trRelatedFunctions()
    { return "Gerelateerde functies"; }
    QCString trRelatedSubscript()
    { return "(Merk op dat dit geen member functies zijn.)"; }
    QCString trDetailedDescription()
    { return "Gedetaileerde Beschrijving"; }
    QCString trMemberTypedefDocumentation()
    { return "Documentatie van type definitie members"; }
    QCString trMemberEnumerationDocumentation()
    { return "Documentatie van enumeratie members"; }
    QCString trEnumerationValueDocumentation()
    { return "Documentatie van enumeratie waarden"; }
    QCString trMemberFunctionDocumentation()
    { return "Documentatie van functie members"; }
    QCString trMemberDataDocumentation()
    { return "Documentatie van data members"; }
    QCString trGeneratedFrom(const char *s,bool single)
    { 
      QCString result=(QCString)"De documentatie voor deze"+s+
                     " is gegenereerd op grond van de volgende file";
      if (single) result+=":";   else result+="s:";
      return result;
    }
    QCString trMore()
    { return "Meer..."; }
    QCString trListOfAllMembers()
    { return "Lijst van alle members."; }
    QCString trMemberList()
    { return "Member Lijst"; }
    QCString trThisIsTheListOfAllMembers()
    { return "Dit is de complete lijst van alle members voor"; }
    QCString trIncludingInheritedMembers()
    { return ", inclusief alle overge&euml;rfde members."; }
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="Automatisch gegenereerd door Doxygen"; 
      if (s) result+=(QCString)" voor "+s;
      result+=" uit de programmacode."; 
      return result;
    }
    QCString trEnumName()
    { return "enum naam"; }
    QCString trEnumValue()
    { return "enum waarde"; }
    QCString trDefinedIn()
    { return "gedefinieerd in"; }
    QCString trVerbatimText(const char *f)
    { return (QCString)"Dit is de letterlijke tekst van de include file "+f+"."; }
    QCString trModules()
    { return "Modules"; }
    QCString trClassHierarchy()
    { return "Klasse Hi&euml;rarchie"; }
    QCString trCompoundList()
    { return "Compound Lijst"; }
    QCString trFileList()
    { return "File Lijst"; }
    QCString trHeaderFiles()
    { return "Header Lijst"; }
    QCString trCompoundMembers()
    { return "Compound Members"; }
    QCString trFileMembers()
    { return "File members"; }
    QCString trRelatedPages()
    { return "Gerelateerde pagina's"; }
    QCString trExamples()
    { return "Voorbeelden"; }
    QCString trSearch()
    { return "Zoeken"; }
    QCString trClassHierarchyDescription()
    { return "Deze inheritance lijst is min of meer alfabetisch "
             "gesorteerd:";
    }
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Hieronder volgt de lijst met alle ";
      if (!extractAll) result+="gedocumenteerde ";
      result+="files, elk met een korte beschrijving:";
      return result;
    }
    QCString trCompoundListDescription()
    { return "Hieronder volgen de klassen, structs en "
             "unions met voor elk een korte beschrijving:"; 
    }
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Hieronder volgt de lijst met alle ";
      if (!extractAll) result+="gedocumenteerde ";
      result+="klasse members met links naar ";
      if (extractAll) result+="de klasse documentatie voor elke member:";
      else result+="de klassen waartoe ze behoren:";
      return result;
    }
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Hieronder volgt de lijst met alle ";
      if (!extractAll) result+="gedocumenteerde ";
      result+="file members met links naar ";
      if (extractAll) result+="de file documentatie voor elke member:";
      else result+="de files waartoe ze behoren:";
      return result;
    }
    QCString trHeaderFilesDescription()
    { return "Hieronder volgen de header files die de API vormen:"; }
    QCString trExamplesDescription()
    { return "Hieronder volgt de lijst met alle voorbeelden:"; }
    QCString trRelatedPagesDescription()
    { return "Hieronder volgt de lijst met alle pagina's die gerelateerde documentatie bevatten:"; }
    QCString trModulesDescription()
    { return "Hieronder volgt de lijst met alle modules:"; }
    QCString trNoDescriptionAvailable()
    { return "Geen korte beschrijving beschikbaar"; }

    QCString trDocumentation()
    { return "Documentatie"; }
    QCString trModuleIndex()
    { return "Module Index"; }
    QCString trHierarchicalIndex()
    { return "Hi&euml;rarchische Index"; }
    QCString trCompoundIndex()
    { return "Compound Index"; }
    QCString trFileIndex() 
    { return "File Index"; }
    QCString trModuleDocumentation()
    { return "Module Documentatie"; }
    QCString trClassDocumentation()
    { return "Klasse Documentatie"; }
    QCString trFileDocumentation()
    { return "File Documentatie"; }
    QCString trExampleDocumentation()
    { return "Documentatie van voorbeelden"; }
    QCString trPageDocumentation()
    { return "Documentatie van gerelateerde pagina's"; }
    QCString trReferenceManual()
    { return "Naslagwerk"; }

    QCString trDefines()
    { return "Defines"; }
    QCString trFuncProtos()
    { return "Functie Prototypes"; }
    QCString trTypedefs()
    { return "Typedefs"; }
    QCString trEnumerations()
    { return "Enumeraties"; }
    QCString trFunctions()
    { return "Functies"; }
    QCString trVariables()
    { return "Variabelen"; }
    QCString trEnumerationValues()
    { return "Enumeratie waarden"; }
    QCString trAuthor()
    { return "auteur"; }
    QCString trDefineDocumentation()
    { return "Documentatie van defines"; }
    QCString trFunctionPrototypeDocumentation()
    { return "Documentatie van functie Prototypes"; }
    QCString trTypedefDocumentation()
    { return "Documentatie van typedefs"; }
    QCString trEnumerationTypeDocumentation()
    { return "Documentatie van enumeratie types"; }
    QCString trFunctionDocumentation()
    { return "Documentatie van functies"; }
    QCString trVariableDocumentation()
    { return "Documentatie van variabelen"; }
    QCString trCompounds()
    { return "Compounds"; }
    QCString trFiles()
    { return "Files"; }
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"Gegenereerd op "+date;
      if (projName) result+=(QCString)" voor "+projName;
      result+=(QCString)" door";
      return result;
    }
    QCString trWrittenBy()
    {
      return "geschreven door";
    }
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Klasse diagram voor "+clName;
    }
    QCString trForInternalUseOnly()
    { return "Alleen voor intern gebruik."; }
    QCString trReimplementedForInternalReasons()
    { return "Om interne rederene opnieuwd ge&iuml;mplemented; "
             "de API wordt er niet door be&iuml;nvloed."; 
    }
    QCString trWarning()
    { return "Waarschuwing"; }
    QCString trBugsAndLimitations()
    { return "Fouten en beperkingen"; }
    QCString trVersion()
    { return "Versie"; }
    QCString trDate()
    { return "Datum"; }
    QCString trAuthors()
    { return "Auteur(s)"; }
    QCString trReturns()
    { return "Retourneerd"; }
    QCString trSeeAlso()
    { return "Zie ook"; }
    QCString trParameters()
    { return "Parameters"; }
    QCString trExceptions()
    { return "Excepties"; }
    QCString trGeneratedBy()
    { return "Gegenereerd door"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990307 
//////////////////////////////////////////////////////////////////////////
    
    QCString trNamespaceList()
    { return "Namespace Lijst"; }
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Hier is een lijst met alle ";
      if (!extractAll) result+="gedocumenteerde ";
      result+="namespaces met voor elk een korte beschrijving:";
      return result;
    }
    QCString trFriends()
    { return "Friends"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    QCString trRelatedFunctionDocumentation()
    { return "Documentatie van friends en gerelateerde functies"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType)
      // used as the title of the HTML page of a class/struct/union
    {
      QCString result=(QCString)clName+" ";
      switch(compType)
      {
        case ClassDef::Class:  result+=" Class"; break;
        case ClassDef::Struct: result+=" Struct"; break;
        case ClassDef::Union:  result+=" Union"; break;
        case ClassDef::Interface:  result+=" Interface"; break;
        case ClassDef::Exception:  result+=" Exception"; break;
      }
      result+=" Referentie";
      return result;
    }
    QCString trFileReference(const char *fileName)
      // used as the title of the HTML page of a file
    {
      QCString result=fileName;
      result+=" File Referentie"; 
      return result;
    }
    QCString trNamespaceReference(const char *namespaceName)
      // used as the title of the HTML page of a namespace
    {
      QCString result=namespaceName;
      result+=" Namespace Referentie";
      return result;
    }
    
    // these are for the member sections of a class, struct or union 
    QCString trPublicMembers()
    { return "Public Members"; }
    QCString trPublicSlots()
    { return "Public Slots"; }
    QCString trSignals()
    { return "Signals"; }
    QCString trStaticPublicMembers()
    { return "Static Public Members"; }
    QCString trProtectedMembers()
    { return "Protected Members"; }
    QCString trProtectedSlots()
    { return "Protected Slots"; }
    QCString trStaticProtectedMembers()
    { return "Static Protected Members"; }
    QCString trPrivateMembers()
    { return "Private Members"; }
    QCString trPrivateSlots()
    { return "Private Slots"; }
    QCString trStaticPrivateMembers()
    { return "Static Private Members"; }
    // end of member sections 
    
    QCString trWriteList(int numEntries)
    {
      // this function is used to produce a comma-separated list of items.
      // use generateMarker(i) to indicate where item i should be put.
      QCString result;
      int i;
      // the inherits list contain `numEntries' classes
      for (i=0;i<numEntries;i++) 
      {
        // use generateMarker to generate placeholders for the class links!
        result+=generateMarker(i); // generate marker for entry i in the list 
                                   // (order is left to right)
        
        if (i!=numEntries-1)  // not the last entry, so we need a separator
        {
          if (i<numEntries-2) // not the fore last entry 
            result+=", ";
          else                // the fore last entry
            result+=" en ";
        }
      }
      return result; 
    }
    
    QCString trInheritsList(int numEntries)
      // used in class documentation to produce a list of base classes,
      // if class diagrams are disabled.
    {
      return "Erft over van "+trWriteList(numEntries)+".";
    }
    QCString trInheritedByList(int numEntries)
      // used in class documentation to produce a list of super classes,
      // if class diagrams are disabled.
    {
      return "Wordt overge&euml;rfd door "+trWriteList(numEntries)+".";
    }
    QCString trReimplementedFromList(int numEntries)
      // used in member documentation blocks to produce a list of 
      // members that are hidden by this one.
    {
      return "Nieuwe implementatie van "+trWriteList(numEntries)+".";
    }
    QCString trReimplementedInList(int numEntries)
    {
      // used in member documentation blocks to produce a list of
      // all member that overwrite the implementation of this member.
      return "Opnieuw ge&iuml;mplementeerd in "+trWriteList(numEntries)+".";
    }

    QCString trNamespaceMembers()
      // This is put above each page as a link to all members of namespaces.
    { return "Namespace Members"; }
    QCString trNamespaceMemberDescription(bool extractAll)
      // This is an introduction to the page with all namespace members
    { 
      QCString result="Hier is een lijst van alle ";
      if (!extractAll) result+="gedocumenteerde ";
      result+="namespace members met links naar ";
      if (extractAll) 
        result+="de namespace documentatie voor iedere member:";
      else 
        result+="de namespaces waartoe ze behoren:";
      return result;
    }
    QCString trNamespaceIndex()
      // This is used in LaTeX as the title of the chapter with the 
      // index of all namespaces.
    { return "Namespace Index"; }
    QCString trNamespaceDocumentation()
      // This is used in LaTeX as the title of the chapter containing
      // the documentation of all namespaces.
    { return "Namespace Documentatie"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"De documentatie voor deze ";
      switch(compType)
      {
        case ClassDef::Class:      result+="class"; break;
        case ClassDef::Struct:     result+="struct"; break;
        case ClassDef::Union:      result+="union"; break;
        case ClassDef::Interface:  result+="interface"; break;
        case ClassDef::Exception:  result+="exception"; break;
      }
      result+=" is gegenereerd op grond van de volgende file";
      if (single) result+=":"; else result+="s:";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    QCString trAlphabeticalList()
    { return "Alphabetical List"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    QCString trReturnValues()
    { return "Retour waarden"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    QCString trMainPage()
    { return "Hoofd Pagina"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    QCString trPageAbbreviation()
    { return "p."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991106
//////////////////////////////////////////////////////////////////////////

    QCString trSources()
    {
      return "Broncode";
    }
    QCString trDefinedAtLineInSourceFile()
    {
      return "De definitie bevindt zich op regel @0 in de file @1.";
    }
    QCString trDefinedInSourceFile()
    {
      return "De definitie bevindt zich in de file @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    QCString trDeprecated()
    {
      return "Verouderd";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)"Collaboratie diagram voor "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    QCString trInclDepGraph(const char *fName)
    {
      return (QCString)"Include afhankelijkheidsgraaf voor "+fName+":";
    }
    /*! header that is put before the list of constructor/destructors. */
    QCString trConstructorDocumentation()
    {
      return "Constructor & Destructor Documentatie"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    QCString trGotoSourceCode()
    {
      return "Ga naar de bron code van deze file.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    QCString trGotoDocumentation()
    {
      return "Ga naar de documentatie van deze file.";
    }
    /*! Text for the \pre command */
    QCString trPrecondition()
    {
      return "Preconditie";
    }
    /*! Text for the \post command */
    QCString trPostcondition()
    {
      return "Postconditie";
    }
    /*! Text for the \invariant command */
    QCString trInvariant()
    {
      return "Invariant";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    QCString trInitialValue()
    {
      return "Initi&euml;le waarde:";
    }
    /*! Text used the source code in the file index */
    QCString trCode()
    {
      return "code";
    }
    QCString trGraphicalHierarchy()
    {
      return "Grafische Klasse Hierarchie";
    }
    QCString trGotoGraphicalHierarchy()
    {
      return "Ga naar de grafische klasse hierarchie";
    }
    QCString trGotoTextualHierarchy()
    {
      return "Ga naar de tekstu&euml;le klasse hierarchie";
    }
    QCString trPageIndex()
    {
      return "Pagina Index";
    }
};

#endif