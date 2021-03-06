#ifndef GENIE_EXECUTION_POLICY_SINGLE_RANGE_H_
#define GENIE_EXECUTION_POLICY_SINGLE_RANGE_H_

#include <genie/interface/execution_policy.h>
#include <genie/interface/types.h>

namespace genie {
namespace execution_policy {

class SingleRangeExecutionPolicy : public genie::ExecutionPolicy {
	friend std::shared_ptr<genie::ExecutionPolicy> genie::MakePolicy(const genie::Config& config);
	private:
		uint32_t query_range_;
		SingleRangeExecutionPolicy() = default;
	public:
		virtual std::shared_ptr<genie::table::inv_table> BuildTable(
				const genie::TableData& table_data) override final;
		virtual std::vector<genie::query::Query> BuildQuery(
				const std::shared_ptr<const genie::table::inv_table>& table,
				const genie::QueryData& query_data) override final;
		virtual genie::SearchResult Match(
				const std::shared_ptr<const genie::table::inv_table>& table,
				const std::vector<genie::query::Query>& queries) override final;
		virtual genie::SearchResult Match(
				const std::vector<std::shared_ptr<const genie::table::inv_table> >& table,
				const std::vector<std::vector<genie::query::Query> >& queries) override final;
		virtual void Validate() override final;
		void SetQueryRange(const uint32_t query_range);
};

}
}

#endif
