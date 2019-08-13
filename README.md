Forked from https://github.com/JohnnyFFM/blagominer

# DCMiner
DCMiner is the fork version of blagominer
-added config item "MinerName"
-added config item "AccountKey"
-fixed some memory errors
-fixed json parsing error

# Blagominer
I've modded Blagominer by modding a modded version from Quibus :-)<br>
Added a couple of thing to Blagominer:<br>
-automatically switch from POC1 to POC2 depending on block height<br>
-added config item "POC2StartBlock":502000 <br>
-added second cache parameter as shuffling needs more cache to perform (less seeks)<br>
-added config item "CacheSize2" : 262144<br>
-added ability to include POC2 filenames (no stagger in filename)<br>
-ability to run the miner on mixed POC1 & POC2 files<br>
-abbility to run POC2 files in a POC1 world & vice versa<br>
-reading in hashing now performed in parallel<br>
