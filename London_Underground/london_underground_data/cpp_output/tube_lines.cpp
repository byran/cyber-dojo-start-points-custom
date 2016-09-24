#include "tube_lines.hpp"

std::vector<std::string> const stations = {
	"Barkingside",                // 0
	"Buckhurst Hill",             // 1
	"Bethnal Green",              // 2
	"Bond Street",                // 3
	"Chancery Lane",              // 4
	"Debden",                     // 5
	"East Acton",                 // 6
	"Epping",                     // 7
	"Fairlop",                    // 8
	"Gants Hill",                 // 9
	"Holborn",                    // 10
	"Hanger Lane",                // 11
	"Hainault",                   // 12
	"Holland Park",               // 13
	"Loughton",                   // 14
	"Lancaster Gate",             // 15
	"Leyton",                     // 16
	"Leytonstone",                // 17
	"Marble Arch",                // 18
	"Mile End",                   // 19
	"North Acton",                // 20
	"Newbury Park",               // 21
	"Notting Hill Gate",          // 22
	"Northolt",                   // 23
	"Oxford Circus",              // 24
	"Perivale",                   // 25
	"Queensway",                  // 26
	"Redbridge",                  // 27
	"Ruislip Gardens",            // 28
	"Snaresbrook",                // 29
	"St. Paul's",                 // 30
	"South Woodford",             // 31
	"Tottenham Court Road",       // 32
	"Theydon Bois",               // 33
	"White City",                 // 34
	"Woodford",                   // 35
	"Wanstead",                   // 36
	"West Acton",                 // 37
	"Acton Town",                 // 38
	"Aldgate East",               // 39
	"Bromley-by-Bow",             // 40
	"Becontree",                  // 41
	"Barons Court",               // 42
	"Bow Road",                   // 43
	"Bayswater",                  // 44
	"Chiswick Park",              // 45
	"Dagenham East",              // 46
	"Dagenham Heathway",          // 47
	"Ealing Common",              // 48
	"Earl's Court",               // 49
	"East Ham",                   // 50
	"Embankment",                 // 51
	"Elm Park",                   // 52
	"East Putney",                // 53
	"Edgware Road (Circle Line)", // 54
	"Fulham Broadway",            // 55
	"Gloucester Road",            // 56
	"Hornchurch",                 // 57
	"High Street Kensington",     // 58
	"Monument",                   // 59
	"Mansion House",              // 60
	"Plaistow",                   // 61
	"Parsons Green",              // 62
	"Putney Bridge",              // 63
	"Ravenscourt Park",           // 64
	"Stamford Brook",             // 65
	"Southfields",                // 66
	"Stepney Green",              // 67
	"St. James's Park",           // 68
	"South Kensington",           // 69
	"Sloane Square",              // 70
	"Temple",                     // 71
	"Turnham Green",              // 72
	"Tower Hill",                 // 73
	"Upminster Bridge",           // 74
	"Upton Park",                 // 75
	"Upney",                      // 76
	"Wimbledon Park",             // 77
	"West Kensington",            // 78
	"Bermondsey",                 // 79
	"Baker Street",               // 80
	"Canons Park",                // 81
	"Dollis Hill",                // 82
	"Finchley Road",              // 83
	"Green Park",                 // 84
	"Kilburn",                    // 85
	"Kingsbury",                  // 86
	"Neasden",                    // 87
	"Queensbury",                 // 88
	"St. John's Wood",            // 89
	"Stanmore",                   // 90
	"Swiss Cottage",              // 91
	"Southwark",                  // 92
	"Willesden Green",            // 93
	"Wembley Park",               // 94
	"Archway",                    // 95
	"Angel",                      // 96
	"Borough",                    // 97
	"Burnt Oak",                  // 98
	"Brent Cross",                // 99
	"Belsize Park",               // 100
	"Chalk Farm",                 // 101
	"Colindale",                  // 102
	"Clapham Common",             // 103
	"Clapham North",              // 104
	"Clapham South",              // 105
	"Colliers Wood",              // 106
	"Camden Town",                // 107
	"East Finchley",              // 108
	"Edgware",                    // 109
	"Finchley Central",           // 110
	"Goodge Street",              // 111
	"Golders Green",              // 112
	"High Barnet",                // 113
	"Hendon Central",             // 114
	"Highgate",                   // 115
	"Hampstead",                  // 116
	"Kennington",                 // 117
	"Leicester Square",           // 118
	"Morden",                     // 119
	"Mill Hill East",             // 120
	"Mornington Crescent",        // 121
	"Oval",                       // 122
	"Stockwell",                  // 123
	"South Wimbledon",            // 124
	"Totteridge & Whetstone",     // 125
	"Tooting Bec",                // 126
	"Tooting Broadway",           // 127
	"Tufnell Park",               // 128
	"West Finchley",              // 129
	"Woodside Park",              // 130
	"Warren Street",              // 131
	"Aldgate",                    // 132
	"Barbican",                   // 133
	"Euston Square",              // 134
	"Goldhawk Road",              // 135
	"Great Portland Street",      // 136
	"Ladbroke Grove",             // 137
	"Latimer Road",               // 138
	"Royal Oak",                  // 139
	"Shepherd's Bush Market",     // 140
	"Wood Lane",                  // 141
	"Westbourne Park",            // 142
	"Edgware Road (Bakerloo)",    // 143
	"Kilburn Park",               // 144
	"Lambeth North",              // 145
	"Maida Vale",                 // 146
	"Piccadilly Circus",          // 147
	"Regent's Park",              // 148
	"Warwick Avenue",             // 149
	"Alperton",                   // 150
	"Arnos Grove",                // 151
	"Arsenal",                    // 152
	"Bounds Green",               // 153
	"Boston Manor",               // 154
	"Caledonian Road",            // 155
	"Covent Garden",              // 156
	"Cockfosters",                // 157
	"Eastcote",                   // 158
	"Hillingdon",                 // 159
	"Hatton Cross",               // 160
	"Hyde Park Corner",           // 161
	"Hounslow Central",           // 162
	"Hounslow East",              // 163
	"Hounslow West",              // 164
	"Holloway Road",              // 165
	"Ickenham",                   // 166
	"Knightsbridge",              // 167
	"Manor House",                // 168
	"North Ealing",               // 169
	"Northfields",                // 170
	"Oakwood",                    // 171
	"Osterley",                   // 172
	"Park Royal",                 // 173
	"Ruislip Manor",              // 174
	"Ruislip",                    // 175
	"Russell Square",             // 176
	"Rayners Lane",               // 177
	"South Ealing",               // 178
	"Southgate",                  // 179
	"South Harrow",               // 180
	"Sudbury Hill",               // 181
	"Sudbury Town",               // 182
	"Turnpike Lane",              // 183
	"Uxbridge",                   // 184
	"Wood Green",                 // 185
	"Chesham",                    // 186
	"Croxley",                    // 187
	"Moor Park",                  // 188
	"North Harrow",               // 189
	"Northwick Park",             // 190
	"Northwood",                  // 191
	"Northwood Hills",            // 192
	"Pinner",                     // 193
	"Preston Road",               // 194
	"Watford",                    // 195
	"West Harrow",                // 196
	"Pimlico",                    // 197
};

std::vector<line_t> const lines = {
	{
		"Central",
		{
			{ 38, 37, 20, 6, 34, 38, 13, 22, 26, 15, 18, 3, 24, 32, 10, 4, 30, 38, 38, 2, 19, 38, 16, 17, 29, 31, 35, 1, 14, 5, 33, 7, },
			{ 38, 37, 20, 6, 34, 38, 13, 22, 26, 15, 18, 3, 24, 32, 10, 4, 30, 38, 38, 2, 19, 38, 16, 17, 36, 27, 9, 21, 0, 8, 12, },
			{ 38, 28, 38, 23, 38, 25, 11, 20, 6, 34, 38, 13, 22, 26, 15, 18, 3, 24, 32, 10, 4, 30, 38, 38, 2, 19, 38, 16, 17, 29, 31, 35, 1, 14, 5, 33, 7, },
			{ 38, 28, 38, 23, 38, 25, 11, 20, 6, 34, 38, 13, 22, 26, 15, 18, 3, 24, 32, 10, 4, 30, 38, 38, 2, 19, 38, 16, 17, 36, 27, 9, 21, 0, 8, 12, },
		}
	},
	{
		"District",
		{
			{ 79, 48, 38, 45, 72, 65, 64, 79, 42, 78, 49, 56, 69, 70, 79, 68, 79, 51, 71, 79, 60, 79, 59, 73, 39, 79, 67, 19, 43, 40, 79, 61, 75, 50, 79, 76, 41, 47, 46, 52, 57, 74, 79, },
			{ 79, 48, 38, 45, 72, 65, 64, 79, 42, 78, 49, 58, 22, 44, 79, 54, },
			{ 79, 49, 56, 69, 70, 79, 68, 79, 51, 71, 79, 60, 79, 59, 73, 39, 79, 67, 19, 43, 40, 79, 61, 75, 50, 79, 76, 41, 47, 46, 52, 57, 74, 79, },
			{ 79, 49, 58, 22, 44, 79, 54, },
			{ 79, 79, 79, 72, 65, 64, 79, 42, 78, 49, 56, 69, 70, 79, 68, 79, 51, 71, 79, 60, 79, 59, 73, 39, 79, 67, 19, 43, 40, 79, 61, 75, 50, 79, 76, 41, 47, 46, 52, 57, 74, 79, },
			{ 79, 79, 79, 72, 65, 64, 79, 42, 78, 49, 58, 22, 44, 79, 54, },
			{ 79, 77, 66, 53, 63, 62, 55, 79, 49, 56, 69, 70, 79, 68, 79, 51, 71, 79, 60, 79, 59, 73, 39, 79, 67, 19, 43, 40, 79, 61, 75, 50, 79, 76, 41, 47, 46, 52, 57, 74, 79, },
			{ 79, 77, 66, 53, 63, 62, 55, 79, 49, 58, 22, 44, 79, 54, },
		}
	},
	{
		"Jubilee",
		{
			{ 90, 81, 88, 86, 94, 87, 82, 93, 85, 95, 83, 91, 89, 80, 3, 84, 95, 95, 92, 95, 79, 95, 95, 95, 95, 95, 95, },
		}
	},
	{
		"Northern",
		{
			{ 119, 124, 106, 127, 126, 132, 105, 103, 104, 123, 122, 117, 132, 97, 132, 132, 132, 132, 96, 132, 132, 107, 101, 100, 116, 112, 99, 114, 102, 98, 109, },
			{ 119, 124, 106, 127, 126, 132, 105, 103, 104, 123, 122, 117, 132, 97, 132, 132, 132, 132, 96, 132, 132, 107, 132, 128, 95, 115, 108, 110, 120, },
			{ 119, 124, 106, 127, 126, 132, 105, 103, 104, 123, 122, 117, 132, 97, 132, 132, 132, 132, 96, 132, 132, 107, 132, 128, 95, 115, 108, 110, 129, 130, 125, 113, },
			{ 119, 124, 106, 127, 126, 132, 105, 103, 104, 123, 122, 117, 132, 51, 132, 118, 32, 111, 131, 132, 121, 107, 101, 100, 116, 112, 99, 114, 102, 98, 109, },
			{ 119, 124, 106, 127, 126, 132, 105, 103, 104, 123, 122, 117, 132, 51, 132, 118, 32, 111, 131, 132, 121, 107, 132, 128, 95, 115, 108, 110, 120, },
			{ 119, 124, 106, 127, 126, 132, 105, 103, 104, 123, 122, 117, 132, 51, 132, 118, 32, 111, 131, 132, 121, 107, 132, 128, 95, 115, 108, 110, 129, 130, 125, 113, },
		}
	},
	{
		"Waterloo & City",
		{
			{ 132, 132, },
		}
	},
	{
		"Circle",
		{
			{ 143, 135, 140, 141, 138, 137, 142, 139, 143, 54, 80, 136, 134, 143, 143, 133, 143, 143, 132, 73, 59, 143, 60, 143, 71, 51, 143, 68, 143, 70, 69, 56, 58, 22, 44, 143, 54, },
		}
	},
	{
		"Bakerloo",
		{
			{ 150, 145, 150, 51, 150, 147, 24, 148, 80, 150, 143, 150, 149, 146, 144, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, },
		}
	},
	{
		"Piccadilly",
		{
			{ 186, 186, 160, 164, 162, 163, 172, 154, 170, 178, 38, 72, 186, 42, 49, 56, 69, 167, 161, 84, 147, 118, 156, 10, 176, 186, 155, 165, 152, 186, 168, 183, 185, 153, 151, 179, 171, 157, },
			{ 186, 186, 160, 164, 162, 163, 172, 154, 170, 178, 38, 72, 186, 42, 49, 56, 69, 167, 161, 84, 147, 118, 156, 10, 176, 186, 155, 165, 152, 186, 168, 183, 185, 153, 151, 179, 171, 157, },
			{ 184, 159, 166, 175, 174, 158, 177, 180, 181, 182, 150, 173, 169, 48, 38, 72, 186, 42, 49, 56, 69, 167, 161, 84, 147, 118, 156, 10, 176, 186, 155, 165, 152, 186, 168, 183, 185, 153, 151, 179, 171, 157, },
		}
	},
	{
		"Metropolitan",
		{
			{ 197, 197, 197, 197, 188, 191, 192, 193, 189, 197, 94, 83, 80, 136, 134, 197, 197, 133, 197, 197, 132, },
			{ 186, 197, 197, 197, 187, 195, },
			{ 186, 197, 197, 197, 188, 191, 192, 193, 189, 197, 190, 194, 94, 83, 80, 136, 134, 197, 197, 133, 197, 197, 132, },
			{ 184, 159, 166, 175, 174, 158, 177, 196, 197, 190, 194, 94, 83, 80, 136, 134, 197, 197, 133, 197, 197, 132, },
			{ 195, 187, 188, 191, 192, 193, 189, 197, 190, 194, 94, 83, 80, 136, 134, 197, 197, 133, 197, 197, 132, },
		}
	},
	{
		"Victoria",
		{
			{ 198, 123, 198, 197, 198, 84, 24, 131, 198, 198, 198, 198, 198, 198, 198, 198, },
		}
	},
	{
		"Hammersmith & City",
		{
			{ 198, 135, 140, 141, 138, 137, 142, 139, 198, 54, 80, 136, 134, 198, 198, 133, 198, 198, 39, 198, 67, 19, 43, 40, 198, 61, 75, 50, 198, },
		}
	},
};
