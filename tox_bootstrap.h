struct bootstrap_node {
    char *address;
    uint16_t port;
    uint8_t key[32];
} bootstrap_nodes[] = {
    {   /* greg@grayhatter.com cmdline.org node*/
        "173.230.153.129", 33445,
        { 0xA9, 0x92, 0xED, 0x1E, 0x7E, 0x8C, 0x6A, 0x4C, 0x71, 0xB1, 0x23, 0x47, 0xD9, 0xBF, 0xA6, 0x7D,
          0xD8, 0x96, 0xCF, 0x7D, 0x56, 0x89, 0xE2, 0x0D, 0xD9, 0x4C, 0xA0, 0x66, 0xEE, 0x38, 0x47, 0x58
        }
    }
};
