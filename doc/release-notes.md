(note: this is a temporary file, to be added-to by anybody, and moved to release-notes at release time)

EROS Core version *version* is now available from:  <https://github.com/ErosCore/eroscore/releases>

This is a new major version release, including various bug fixes and performance improvements, as well as updated translations.

Please report bugs using the issue tracker at github: <https://github.com/ErosCore/eroscore/issues>


Mandatory Update
==============


How to Upgrade
==============

If you are running an older version, shut it down. Wait until it has completely shut down (which might take a few minutes for older versions), then run the installer (on Windows) or just copy over /Applications/EROS-Qt (on Mac) or erosd/eros-qt (on Linux).


Compatibility
==============

EROS Core is extensively tested on multiple operating systems using the Linux kernel, macOS 10.10+, and Windows 7 and later.

Microsoft ended support for Windows XP on [April 8th, 2014](https://www.microsoft.com/en-us/WindowsForBusiness/end-of-xp-support), No attempt is made to prevent installing or running the software on Windows XP, you can still do so at your own risk but be aware that there are known instabilities and issues. Please do not report issues about Windows XP to the issue tracker.

Apple released it's last Mountain Lion update August 13, 2015, and officially ended support on [December 14, 2015](http://news.fnal.gov/2015/10/mac-os-x-mountain-lion-10-8-end-of-life-december-14/). EROS Core software starting with v3.2.0 will no longer run on MacOS versions prior to Yosemite (10.10). Please do not report issues about MacOS versions prior to Yosemite to the issue tracker.

EROS Core should also work on most other Unix-like systems but is not frequently tested on them.


Notable Changes
==============

(Developers: add your notes here as part of your pull requests whenever possible)

Automatic zERS backup has been disabled. Thus, the following configuration options have been removed  (either as entries in the eros.conf file or as startup flags):
- `autozersbackup`
- `backupzers`
- `zersbackuppath`

### Stake-Split threshold
The stake split threshold is no longer required to be integer. It can be a fractional amount. A threshold value of 0 disables the stake-split functionality.
The default value for the stake-split threshold has been lowered from 2000 ERS, down  to 500 ERS.


Dependencies
------------

The minimum required version of QT has been increased from 5.0 to 5.5.1 (the [depends system](https://github.com/eroscore/eros/blob/master/depends/README.md) provides 5.9.7)


RPC Changes
--------------

### Modified input/output for existing commands

- "CoinStake" JSON object in `getblock` output is removed, and replaced with the strings "stakeModifier" and "hashProofOfStake"

- "isPublicSpend" boolean (optional) input parameter is removed from the following commands:
 - `createrawzerocoinspend`
 - `spendzerocoin`
 - `spendzerocoinmints`
 - `spendrawzerocoin`

 These commands are now able to create only *public* spends (private spends were already enabled only on regtest).

- "mintchange" and "minimizechange" boolean input parameters are removed from the following commands:
 - `spendzerocoin`

 Mints are disabled, therefore it is no longer possible to mint the change of a zerocoin spend. The change is minimized by default.

- `setstakesplitthreshold` now accepts decimal amounts. If the provided value is `0`, split staking gets disabled. `getstakesplitthreshold` returns a double.

### Removed commands

The following commands have been removed from the RPC interface:
- `createrawzerocoinstake`
- `getmintsinblocks`


### Newly introduced commands

The following new commands have been added to the RPC interface:
- `...`

Details about each new command can be found below.


*version* Change log
==============

Detailed release notes follow. This overview includes changes that affect behavior, not code moves, refactors and string updates. For convenience in locating the code changes and accompanying discussion, both the pull request and git merge commit are mentioned.

### Core Features

### Build System

### P2P Protocol and Network Code

### GUI

### RPC/REST

### Wallet

### Miscellaneous

## Credits

Thanks to everyone who directly contributed to this release:


As well as everyone that helped translating on [Transifex](https://www.transifex.com/projects/p/Eros-translations/), the QA team during Testing and the Node hosts supporting our Testnet.
