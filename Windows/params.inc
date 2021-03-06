BUCKETS = 256
HASHTAB_ENTRIES = 4096
PARTS = 4
ITEMS = 2896
STATE0_BYTES = 24
STATE1_BYTES = 24
STATE2_BYTES = 20
STATE3_BYTES = 20
STATE4_BYTES = 16
STATE5_BYTES = 12
STATE6_BYTES = 12
STATE7_BYTES = 8
STATE8_BYTES = 4
STATE0_OFFSET = 22
STATE1_OFFSET = 20
STATE2_OFFSET = 17
STATE3_OFFSET = 15
STATE4_OFFSET = 12
STATE5_OFFSET = 10
STATE6_OFFSET = 7
STATE7_OFFSET = 5
STATE8_OFFSET = 2
BLOCKUNIT = 4*2896*256*4
STATE0_DEST = 8 * BLOCKUNIT
STATE1_DEST = 2 * BLOCKUNIT
STATE2_DEST = 9 * BLOCKUNIT
STATE3_DEST = 4 * BLOCKUNIT
STATE4_DEST = 9 * BLOCKUNIT
STATE5_DEST = 6 * BLOCKUNIT
STATE6_DEST = 10 * BLOCKUNIT
STATE7_DEST = 8 * BLOCKUNIT
STATE8_DEST = 10 * BLOCKUNIT
HASHTAB_LOCATION_MASK = 0x0000ffff
HASHTAB_COUNT_MASK = 0x001f0000
HASHTAB_COUNT_1 = 0x10000
HASHTAB_COUNT_2 = 0x20000
HASHTAB_PATTERN_MASK = 0xfff
WORKINGPAIRS_LIMIT = 16384
