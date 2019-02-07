// Copyright (c) 2009-2017 The Bitcoin Core developers\n
// Copyright (c) 2009-2016 The Litecoin Core developers\n
// Copyright (c) 2017-2019 The Bitcore Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "testutil.h"

#ifdef WIN32
#include <shlobj.h>
#endif

#include "fs.h"

fs::path GetTempPath() {
    return fs::temp_directory_path();
}
