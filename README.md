# FuzzingSeminar

## Setup

### AFL
`git clone https://github.com/google/AFL`

### AFL++
`git clone https://github.com/AFLplusplus/AFLplusplus`

### xxHash
Clone repo  
`git clone https://github.com/Cyan4973/xxHash`

Building/Instrumentation  
`make CC=PATH/TO/AFL++/afl-clang-fast CXX=PATH/TO/AFL++/afl-clang-fast++ all`

Building persistent target
`PATH/TO/AFL++/afl-clang-fast -o persistent_target persistent_target.c libxxhash.a`
### cryptocorpus
`git clone https://github.com/randombit/crypto-corpus`

Reduce corpus  
`PATH/TO/AFL++/afl-cmin -i INPUTDIR -o OUTPUTDIR`

## Fuzzing
Fuzz xxhsum
`PATH/TO/AFL/afl-fuzz -D -i CORPUSDIR -o FINDINGSDIR PATH/TO/XXHASH/xxhsum`

Fuzz via harness
`PATH/TO/AFL/afl-fuzz -D -i CORPUSDIR -o FINDINGSDIR PATH/TO/XXHASH/persistent_target`
