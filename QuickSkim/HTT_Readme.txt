How to run/compile skimming for HTT --

There are separate files for the separate final states, so make sure you are compiling the correct one for your skim.
The best thing to do when switching between skimming final states is to remove any executables and to remake them
for the appropriate final state.
After skimming, one can check the output using 'check_skim.cc'. There are similar .C and .py files also, which
are less robust (.C only takes one file), or run much longer (2hrs .py compared to 2mins for .cc on DY mutau skim check).

if you ever get an error like this:
skim.h:11:10: fatal error: TROOT.h: No such file or directory
   11 | #include <TROOT.h>
it means you forgot to do this in your newest session
RCOMP="`root-config --cflags --glibs`"

First, read the other README in this directory and do the printed commands for some small file. We need the 
generated files skim.C and skim.h

run these lines one by one first
```
cp skimOverHTT<<<final_state>>>.C skimOver.C 
RCOMP="`root-config --cflags --glibs`"
g++ $RCOMP quickSkim.C -o quickSkim.exe
g++ $RCOMP skimOver.C -o skimOver.exe
```

then run this line, changing the directories as necessary (currently configured to run over DY from a pre-skimmed sample)

for j in DY; do for i in $(ls ../Run3SkimmedSamples/${j}); do ./quickSkim.exe ../Run3SkimmedSamples/${j}/${i}; g++ $RCOMP skimOver.C -o skimOver.exe; ./skimOver.exe; mv small.root ../Run3FSSplitSamples/<<<final_state>>>/${j}/${i}; done; done

here is the same line as above but split into it's actual structure
for j in DY;
  do for i in $(ls ../Run3SkimmedSamples/${j};
    do ./quickSkim.exe ../Run3SkimmedSamples/${j}/${i};
       g++ $RCOMP skimOver.C -o skimOver.exe;
       ./skimOver.exe;
       mv small.root ../Run3FSSplitSamples/mutau/${j}/${i};
    done;
  done
