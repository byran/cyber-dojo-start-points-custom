#include "tube_lines.hpp"

std::vector<std::string> const stations = {
	"Barkingside",                               // 0
	"Buckhurst Hill",                            // 1
	"Bethnal Green",                             // 2
	"Bond Street",                               // 3
	"Bank",                                      // 4
	"Chancery Lane",                             // 5
	"Chigwell",                                  // 6
	"Debden",                                    // 7
	"East Acton",                                // 8
	"Ealing Broadway",                           // 9
	"Epping",                                    // 10
	"Fairlop",                                   // 11
	"Greenford",                                 // 12
	"Grange Hill",                               // 13
	"Gants Hill",                                // 14
	"Holborn",                                   // 15
	"Hanger Lane",                               // 16
	"Hainault",                                  // 17
	"Holland Park",                              // 18
	"Loughton",                                  // 19
	"Lancaster Gate",                            // 20
	"Liverpool Street",                          // 21
	"Leyton",                                    // 22
	"Leytonstone",                               // 23
	"Marble Arch",                               // 24
	"Mile End",                                  // 25
	"North Acton",                               // 26
	"Newbury Park",                              // 27
	"Notting Hill Gate",                         // 28
	"Northolt",                                  // 29
	"Oxford Circus",                             // 30
	"Perivale",                                  // 31
	"Queensway",                                 // 32
	"Redbridge",                                 // 33
	"Ruislip Gardens",                           // 34
	"Roding Valley",                             // 35
	"Shepherd's Bush (Central)",                 // 36
	"Snaresbrook",                               // 37
	"St. Paul's",                                // 38
	"South Ruislip",                             // 39
	"Stratford",                                 // 40
	"South Woodford",                            // 41
	"Tottenham Court Road",                      // 42
	"Theydon Bois",                              // 43
	"White City",                                // 44
	"Woodford",                                  // 45
	"West Ruislip",                              // 46
	"Wanstead",                                  // 47
	"West Acton",                                // 48
	"Acton Town",                                // 49
	"Aldgate East",                              // 50
	"Bromley-by-Bow",                            // 51
	"Becontree",                                 // 52
	"Blackfriars",                               // 53
	"Barking",                                   // 54
	"Barons Court",                              // 55
	"Bow Road",                                  // 56
	"Bayswater",                                 // 57
	"Cannon Street",                             // 58
	"Chiswick Park",                             // 59
	"Dagenham East",                             // 60
	"Dagenham Heathway",                         // 61
	"Ealing Common",                             // 62
	"Earl's Court",                              // 63
	"East Ham",                                  // 64
	"Embankment",                                // 65
	"Elm Park",                                  // 66
	"East Putney",                               // 67
	"Edgware Road (Circle Line)",                // 68
	"Fulham Broadway",                           // 69
	"Gunnersbury",                               // 70
	"Gloucester Road",                           // 71
	"Hornchurch",                                // 72
	"Hammersmith (Dist&Picc Line)",              // 73
	"High Street Kensington",                    // 74
	"Kensington (Olympia)",                      // 75
	"Kew Gardens",                               // 76
	"Monument",                                  // 77
	"Mansion House",                             // 78
	"Paddington",                                // 79
	"Plaistow",                                  // 80
	"Parsons Green",                             // 81
	"Putney Bridge",                             // 82
	"Richmond",                                  // 83
	"Ravenscourt Park",                          // 84
	"Stamford Brook",                            // 85
	"Southfields",                               // 86
	"Stepney Green",                             // 87
	"St. James's Park",                          // 88
	"South Kensington",                          // 89
	"Sloane Square",                             // 90
	"Temple",                                    // 91
	"Turnham Green",                             // 92
	"Tower Hill",                                // 93
	"Upminster Bridge",                          // 94
	"Upton Park",                                // 95
	"Upminster",                                 // 96
	"Upney",                                     // 97
	"Victoria",                                  // 98
	"West Brompton",                             // 99
	"West Ham",                                  // 100
	"Wimbledon",                                 // 101
	"Wimbledon Park",                            // 102
	"West Kensington",                           // 103
	"Whitechapel",                               // 104
	"Westminster",                               // 105
	"Bermondsey",                                // 106
	"Baker Street",                              // 107
	"Canning Town",                              // 108
	"Canons Park",                               // 109
	"Canada Water",                              // 110
	"Canary Wharf",                              // 111
	"Dollis Hill",                               // 112
	"Finchley Road",                             // 113
	"Green Park",                                // 114
	"Kilburn",                                   // 115
	"Kingsbury",                                 // 116
	"London Bridge",                             // 117
	"Neasden",                                   // 118
	"North Greenwich",                           // 119
	"Queensbury",                                // 120
	"St. John's Wood",                           // 121
	"Stanmore",                                  // 122
	"Swiss Cottage",                             // 123
	"Southwark",                                 // 124
	"West Hampstead",                            // 125
	"Willesden Green",                           // 126
	"Waterloo",                                  // 127
	"Wembley Park",                              // 128
	"Archway",                                   // 129
	"Angel",                                     // 130
	"Balham",                                    // 131
	"Borough",                                   // 132
	"Burnt Oak",                                 // 133
	"Brent Cross",                               // 134
	"Belsize Park",                              // 135
	"Chalk Farm",                                // 136
	"Charing Cross",                             // 137
	"Colindale",                                 // 138
	"Clapham Common",                            // 139
	"Clapham North",                             // 140
	"Clapham South",                             // 141
	"Colliers Wood",                             // 142
	"Camden Town",                               // 143
	"Elephant & Castle",                         // 144
	"East Finchley",                             // 145
	"Edgware",                                   // 146
	"Euston",                                    // 147
	"Finchley Central",                          // 148
	"Goodge Street",                             // 149
	"Golders Green",                             // 150
	"High Barnet",                               // 151
	"Hendon Central",                            // 152
	"Highgate",                                  // 153
	"Hampstead",                                 // 154
	"Kennington",                                // 155
	"Kentish Town",                              // 156
	"King's Cross St. Pancras",                  // 157
	"Leicester Square",                          // 158
	"Morden",                                    // 159
	"Moorgate",                                  // 160
	"Mill Hill East",                            // 161
	"Mornington Crescent",                       // 162
	"Old Street",                                // 163
	"Oval",                                      // 164
	"Stockwell",                                 // 165
	"South Wimbledon",                           // 166
	"Totteridge & Whetstone",                    // 167
	"Tooting Bec",                               // 168
	"Tooting Broadway",                          // 169
	"Tufnell Park",                              // 170
	"West Finchley",                             // 171
	"Woodside Park",                             // 172
	"Warren Street",                             // 173
	"Aldgate",                                   // 174
	"Barbican",                                  // 175
	"Euston Square",                             // 176
	"Farringdon",                                // 177
	"Goldhawk Road",                             // 178
	"Great Portland Street",                     // 179
	"Hammersmith (H&C Line)",                    // 180
	"Ladbroke Grove",                            // 181
	"Latimer Road",                              // 182
	"Paddington (H&C Line)-Underground",         // 183
	"Royal Oak",                                 // 184
	"Shepherd's Bush Market",                    // 185
	"Wood Lane",                                 // 186
	"Westbourne Park",                           // 187
	"Edgware Road (Bakerloo)",                   // 188
	"Harrow & Wealdstone",                       // 189
	"Harlesden",                                 // 190
	"Kenton",                                    // 191
	"Kilburn Park",                              // 192
	"Kensal Green",                              // 193
	"Lambeth North",                             // 194
	"Maida Vale",                                // 195
	"Marylebone",                                // 196
	"North Wembley",                             // 197
	"Piccadilly Circus",                         // 198
	"Queen's Park",                              // 199
	"Regent's Park",                             // 200
	"Stonebridge Park",                          // 201
	"South Kenton",                              // 202
	"Willesden Junction",                        // 203
	"Warwick Avenue",                            // 204
	"Wembley Central",                           // 205
	"Alperton",                                  // 206
	"Arnos Grove",                               // 207
	"Arsenal",                                   // 208
	"Bounds Green",                              // 209
	"Boston Manor",                              // 210
	"Caledonian Road",                           // 211
	"Covent Garden",                             // 212
	"Cockfosters",                               // 213
	"Eastcote",                                  // 214
	"Finsbury Park",                             // 215
	"Hillingdon",                                // 216
	"Hatton Cross",                              // 217
	"Hyde Park Corner",                          // 218
	"Heathrow Terminal 4",                       // 219
	"Heathrow Terminal 5",                       // 220
	"Heathrow Terminals 1-2-3",                  // 221
	"Hounslow Central",                          // 222
	"Hounslow East",                             // 223
	"Hounslow West",                             // 224
	"Holloway Road",                             // 225
	"Ickenham",                                  // 226
	"Knightsbridge",                             // 227
	"Manor House",                               // 228
	"North Ealing",                              // 229
	"Northfields",                               // 230
	"Oakwood",                                   // 231
	"Osterley",                                  // 232
	"Park Royal",                                // 233
	"Ruislip Manor",                             // 234
	"Ruislip",                                   // 235
	"Russell Square",                            // 236
	"Rayners Lane",                              // 237
	"South Ealing",                              // 238
	"Southgate",                                 // 239
	"South Harrow",                              // 240
	"Sudbury Hill",                              // 241
	"Sudbury Town",                              // 242
	"Turnpike Lane",                             // 243
	"Uxbridge",                                  // 244
	"Wood Green",                                // 245
	"Amersham",                                  // 246
	"Chalfont & Latimer",                        // 247
	"Chesham",                                   // 248
	"Croxley",                                   // 249
	"Chorleywood",                               // 250
	"Harrow-on-the-Hill",                        // 251
	"Moor Park",                                 // 252
	"North Harrow",                              // 253
	"Northwick Park",                            // 254
	"Northwood",                                 // 255
	"Northwood Hills",                           // 256
	"Pinner",                                    // 257
	"Preston Road",                              // 258
	"Rickmansworth",                             // 259
	"Watford",                                   // 260
	"West Harrow",                               // 261
	"Blackhorse Road",                           // 262
	"Brixton",                                   // 263
	"Highbury & Islington",                      // 264
	"Pimlico",                                   // 265
	"Seven Sisters",                             // 266
	"Tottenham Hale",                            // 267
	"Vauxhall",                                  // 268
	"Walthamstow Central",                       // 269
};

std::vector<line_t> const lines = {
	{
		"Central",
		{
			{ 9, 48, 26, 8, 44, 36, 18, 28, 32, 20, 24, 3, 30, 42, 15, 5, 38, 4, 21, 2, 25, 40, 22, 23, 37, 41, 45, 1, 19, 7, 43, 10, },
			{ 9, 48, 26, 8, 44, 36, 18, 28, 32, 20, 24, 3, 30, 42, 15, 5, 38, 4, 21, 2, 25, 40, 22, 23, 47, 33, 14, 27, 0, 11, 17, },
			{ 46, 34, 39, 29, 12, 31, 16, 26, 8, 44, 36, 18, 28, 32, 20, 24, 3, 30, 42, 15, 5, 38, 4, 21, 2, 25, 40, 22, 23, 37, 41, 45, 1, 19, 7, 43, 10, },
			{ 46, 34, 39, 29, 12, 31, 16, 26, 8, 44, 36, 18, 28, 32, 20, 24, 3, 30, 42, 15, 5, 38, 4, 21, 2, 25, 40, 22, 23, 47, 33, 14, 27, 0, 11, 17, },
		}
	},
	{
		"District",
		{
			{ 9, 62, 49, 59, 92, 85, 84, 73, 55, 103, 63, 71, 89, 90, 98, 88, 105, 65, 91, 53, 78, 58, 77, 93, 50, 104, 87, 25, 56, 51, 100, 80, 95, 64, 54, 97, 52, 61, 60, 66, 72, 94, 96, },
			{ 9, 62, 49, 59, 92, 85, 84, 73, 55, 103, 63, 74, 28, 57, 79, 68, },
			{ 75, 63, 71, 89, 90, 98, 88, 105, 65, 91, 53, 78, 58, 77, 93, 50, 104, 87, 25, 56, 51, 100, 80, 95, 64, 54, 97, 52, 61, 60, 66, 72, 94, 96, },
			{ 75, 63, 74, 28, 57, 79, 68, },
			{ 83, 76, 70, 92, 85, 84, 73, 55, 103, 63, 71, 89, 90, 98, 88, 105, 65, 91, 53, 78, 58, 77, 93, 50, 104, 87, 25, 56, 51, 100, 80, 95, 64, 54, 97, 52, 61, 60, 66, 72, 94, 96, },
			{ 83, 76, 70, 92, 85, 84, 73, 55, 103, 63, 74, 28, 57, 79, 68, },
			{ 101, 102, 86, 67, 82, 81, 69, 99, 63, 71, 89, 90, 98, 88, 105, 65, 91, 53, 78, 58, 77, 93, 50, 104, 87, 25, 56, 51, 100, 80, 95, 64, 54, 97, 52, 61, 60, 66, 72, 94, 96, },
			{ 101, 102, 86, 67, 82, 81, 69, 99, 63, 74, 28, 57, 79, 68, },
		}
	},
	{
		"Jubilee",
		{
			{ 122, 109, 120, 116, 128, 118, 112, 126, 115, 125, 113, 123, 121, 107, 3, 114, 105, 127, 124, 117, 106, 110, 111, 119, 108, 100, 40, },
		}
	},
	{
		"Northern",
		{
			{ 159, 166, 142, 169, 168, 131, 141, 139, 140, 165, 164, 155, 144, 132, 117, 4, 160, 163, 130, 157, 147, 143, 136, 135, 154, 150, 134, 152, 138, 133, 146, },
			{ 159, 166, 142, 169, 168, 131, 141, 139, 140, 165, 164, 155, 144, 132, 117, 4, 160, 163, 130, 157, 147, 143, 156, 170, 129, 153, 145, 148, 161, },
			{ 159, 166, 142, 169, 168, 131, 141, 139, 140, 165, 164, 155, 144, 132, 117, 4, 160, 163, 130, 157, 147, 143, 156, 170, 129, 153, 145, 148, 171, 172, 167, 151, },
			{ 159, 166, 142, 169, 168, 131, 141, 139, 140, 165, 164, 155, 127, 65, 137, 158, 42, 149, 173, 147, 162, 143, 136, 135, 154, 150, 134, 152, 138, 133, 146, },
			{ 159, 166, 142, 169, 168, 131, 141, 139, 140, 165, 164, 155, 127, 65, 137, 158, 42, 149, 173, 147, 162, 143, 156, 170, 129, 153, 145, 148, 161, },
			{ 159, 166, 142, 169, 168, 131, 141, 139, 140, 165, 164, 155, 127, 65, 137, 158, 42, 149, 173, 147, 162, 143, 156, 170, 129, 153, 145, 148, 171, 172, 167, 151, },
		}
	},
	{
		"Waterloo & City",
		{
			{ 127, 4, },
		}
	},
	{
		"Circle",
		{
			{ 180, 178, 185, 186, 182, 181, 187, 184, 183, 68, 107, 179, 176, 157, 177, 175, 160, 21, 174, 93, 77, 58, 78, 53, 91, 65, 105, 88, 98, 90, 89, 71, 74, 28, 57, 79, 68, },
		}
	},
	{
		"Bakerloo",
		{
			{ 144, 194, 127, 65, 137, 198, 30, 200, 107, 196, 188, 79, 204, 195, 192, 199, 193, 203, 190, 201, 205, 197, 202, 191, 189, },
		}
	},
	{
		"Piccadilly",
		{
			{ 219, 221, 217, 224, 222, 223, 232, 210, 230, 238, 49, 92, 73, 55, 63, 71, 89, 227, 218, 114, 198, 158, 212, 15, 236, 157, 211, 225, 208, 215, 228, 243, 245, 209, 207, 239, 231, 213, },
			{ 220, 221, 217, 224, 222, 223, 232, 210, 230, 238, 49, 92, 73, 55, 63, 71, 89, 227, 218, 114, 198, 158, 212, 15, 236, 157, 211, 225, 208, 215, 228, 243, 245, 209, 207, 239, 231, 213, },
			{ 244, 216, 226, 235, 234, 214, 237, 240, 241, 242, 206, 233, 229, 62, 49, 92, 73, 55, 63, 71, 89, 227, 218, 114, 198, 158, 212, 15, 236, 157, 211, 225, 208, 215, 228, 243, 245, 209, 207, 239, 231, 213, },
		}
	},
	{
		"Metropolitan",
		{
			{ 246, 247, 250, 259, 252, 255, 256, 257, 253, 251, 128, 113, 107, 179, 176, 157, 177, 175, 160, 21, 174, },
			{ 248, 247, 250, 259, 249, 260, },
			{ 248, 247, 250, 259, 252, 255, 256, 257, 253, 251, 254, 258, 128, 113, 107, 179, 176, 157, 177, 175, 160, 21, 174, },
			{ 244, 216, 226, 235, 234, 214, 237, 261, 251, 254, 258, 128, 113, 107, 179, 176, 157, 177, 175, 160, 21, 174, },
			{ 260, 249, 252, 255, 256, 257, 253, 251, 254, 258, 128, 113, 107, 179, 176, 157, 177, 175, 160, 21, 174, },
		}
	},
	{
		"Victoria",
		{
			{ 263, 165, 268, 265, 98, 114, 30, 173, 147, 157, 264, 215, 266, 267, 262, 269, },
		}
	},
	{
		"Hammersmith & City",
		{
			{ 180, 178, 185, 186, 182, 181, 187, 184, 183, 68, 107, 179, 176, 157, 177, 175, 160, 21, 50, 104, 87, 25, 56, 51, 100, 80, 95, 64, 54, },
		}
	},
};
