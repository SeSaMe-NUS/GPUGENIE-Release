/*
 * FileReader.h
 *
 *  Created on: Oct 26, 2015
 *      Author: zhoujingbo
 */

#ifndef FILEREADER_H_
#define FILEREADER_H_

#include "../GaLG.h"

#include <vector>
#include <string>

namespace GaLG {

	void read_file(std::vector<std::vector<int> >& dest,
					const char* fname,
					int num);

	void read_query(inv_table& table,
					const char* fname,
					std::vector<query>& queries,
					int num_of_queries,
					int num_of_query_dims,
					int radius,
					int topk,
					float selectivity);

} /* namespace GaLG */


#endif /* FILEREADER_H_ */
